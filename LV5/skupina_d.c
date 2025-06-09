#include<stdio.h>
#include<string.h>
#include<ctype.h>

//zad1
int skupina_d_zad1() {
    char str[101];
    int i = 0, count_a = 0;

    printf("Unjeti string do 100 znakova: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == 'a' || str[i] == 'A') {
            count_a++;
        }
        i++;
    }

    if (i > 0) {
        double postotak = (double)count_a / i * 100;
        printf("Slovo 'a' se ponavlja %d puta, to je %.2f%% od ukupnog broja znakova.\n", count_a, postotak);
    }
    else {
        printf("Nema slova 'a'.\n");
    }
    return 0;
}

//zad2
int skupina_d_zad2() {
    char str[101];
    int count_a = 0,count_A = 0;

    printf("Unjeti string do 100 znakova: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            count_a++;
        }
        else if (str[i] == 'A') {
            count_A++;
        }
    }

    if (count_a > count_A) {
        printf("Slovo 'a' se ponovilo vise puta (%d).\n", count_a);
    }
    else if (count_A > count_a) {
        printf("Slovo 'A' se ponovilo vise puta (%d).\n", count_A);
    }
    else {
        printf("Slovo 'a' i 'A' su se ponovili jednako (%d).\n", count_a);
    }
    return 0;
}

//zad3
int skupina_d_zad3() {
    char str[51];
    int br = 0;

    printf("Unjeti string do 50 znakova: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            br++;
        }
    }
    printf("Ukupan broj samoglasnika u stringu: %d\n", br);

    return 0;
}

