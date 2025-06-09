#include<stdio.h>

//zad1
int skupina_c_zad1() {
    int n, polje[4][4], suma = 0;

    do {
        printf("Unjeti broj n < 4: ");
        scanf_s("%d", &n);
    } while (n >= 4 || n <= 0);

    printf("Unjeti %d x %d matricu cijelih brojeva:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%d", &polje[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int broj = polje[i][j];
            if ((broj >= 10 && broj <= 99) || (broj <= -10 && broj >= -99)) {
                suma += broj;
            }
        }
    }
    printf("Zbroj svih dvoznamenkastih brojeva je: %d\n", suma);

    return 0;
}

//zad2
int skupina_c_zad2() {
    int n;
    float polje[5][5];

    do {
        printf("Unjeti broj n < 5: ");
        scanf_s("%d", &n);
    } while (n >= 5 || n <= 0);

    printf("Unjeti %d x %d matricu realnih brojeva:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%f", &polje[i][j]);
        }
    }
    float max = polje[0][0];
    float min = polje[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (polje[i][j] > max)
                max = polje[i][j];
            if (polje[i][j] < min)
                min = polje[i][j];
        }
    }
    float razlika = max - min;
    printf("Razlika najveceg i najmanjeg elementa je: %.2f\n", razlika);

    return 0;
}

//zad3
int skupina_c_zad3() {
    int n, br = 0;
    float polje[5][5], umnozak = 1;

    do {
        printf("Unjeti broj izmedu 2 < n < 5: ");
        scanf_s("%d", &n);
    } while (n <= 2 || n >= 5);

    printf("Unjeti %d x %d realnih brojeva:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%f", &polje[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (polje[i][i] > 0) {
            umnozak *= polje[i][i];
            br = 1;
        }
    }

    if (br) {
        printf("Umnozak svih pozitivnih elemenata na glavnoj dijagonali je: %.2f\n", umnozak);
    }
    else {
        printf("Nema pozitivnih elemenata na glavnoj dijagonali.\n");
    }

    return 0;
}
