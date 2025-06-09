#include<stdio.h>
#include<math.h>

//zad1
int skupina_b_zad1() {
    int n, niz[20];
    float suma = 0, sr_vr;
    do {
        printf("Unjeti broj elemenata 1 < n <= 20 : ");
        scanf_s("%d", &n);
    } while (n <= 1 || n > 20);

    printf("Unjeti %d cijela broja: ", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &niz[i]);
    }

    for (int i = 0; i < n; i++) {
        suma += niz[i];
    }
    sr_vr = suma / n;

    printf("Srednja vrijednost: %.2f\n", sr_vr);
    printf("Elementi veci od srednje vrijednosti i parni: ");

    int br = 0;
    for (int i = 0; i < n; i++) {
        if (niz[i] > sr_vr && niz[i] % 2 == 0) {
            printf("%d ", niz[i]);
            br++;
        }
    }
    if (br == 0)
        printf("Nema tih elemenata.");

    int neparni_manji = 0, neparni_veci = 0;
    for (int i = 0; i < n; i++) {
        if (niz[i] % 2 != 0) {
            if (niz[i] < sr_vr) {
                neparni_manji++;
            }
            else if (niz[i] > sr_vr) {
                neparni_veci++;
            }
        }
    }
    printf("\nNeparni brojevi manji od srednje vrijednosti: %d", neparni_manji);
    printf("\nNeparni brojevi veci od srednje vrijednosti: %d", neparni_veci);
    return 0;
}

//zad2
int skupina_b_zad2()
{
    int n;
    float niz[50];

    do {
        printf("Unjeti broj elemenata izmedu  5 <= n < 50: ");
        scanf_s("%d", &n);
    } while (n < 5 || n >= 50);

    printf("Unjeti %d realnih brojeva:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%f", &niz[i]);
    }
    printf("Elementi u obrnutom redoslijedu sa udvostucenim parnim brojevima:\n");

    for (int i = n - 1; i >= 0; i--) {
        if (floor(niz[i]) == niz[i] && ((int)niz[i] % 2 == 0)) {
            printf("%.2f ", niz[i] * 2);
        }else {
            printf("%.2f ", niz[i]);
        }
    }
    return 0;
}


//zad3
int skupina_b_zad3()
{
    int n, br1 = 0,br2 = 0;
    float niz[100], suma1 = 0, suma2 = 0;

    do {
        printf("Unjeti broj elemenata izmedu 7 < n < 77: ");
        scanf_s("%d", &n);
    } while (n <= 7 || n >= 77);

    printf("Unjeti %d realnih brojeva:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%f", &niz[i]);
    }

    for (int i = 0; i < n; i++) {
        if (niz[i] >= -10 && niz[i] <= 10) {
            suma1 += niz[i];
            br1++;
        }
        if (niz[i] >= 30 && niz[i] <= 40) {
            suma2 += niz[i];
            br2++;
        }
    }

    if (br1 > 0) {
        printf("Zbroj elemenata unutar intervala [-10, 10]: %.2f\n", suma1);
    }
    else {
        printf("Nema elemenata u intervalu [-10, 10].\n");
    }

    if (br2 > 0) {
        printf("Srednja vrijednost elemenata unutar intervala [30, 40]: %.2f\n", suma2 / br2);
    }
    else {
        printf("Nema elemenata u intervalu [30, 40].\n");
    }

    return 0;
}

