#include<stdio.h>
#include<math.h>
#define PI 3.14159

//zad1
double Stozac(double r, double h) {
    return (1.0 / 3.0) * PI * pow(r, 2) * h;
}

int skupina_e_zad1() {
    double polumjer, visina;
    printf("Unjeti polumjer: ");
    scanf_s("%lf",&polumjer);
    printf("Unjeti visinu: ");
    scanf_s("%lf", &visina);

    double volumen = Stozac(polumjer, visina);

    printf("Volumen stozca sa je: %.2f\n", volumen);

    return 0;
}

//zad2
int Znamenke(int n) {
    if (n >= 0 && n <= 9)
        return 1;
    else if (n >= 10 && n <= 99)
        return 2;
    else
        return 3;
}

int skupina_e_zad2() {
    int broj, rezultat = 0;
    do
    {
        printf("Unjeti pozitivan cijeli broj: ");
        scanf_s("%d", &broj);
    } while (broj < 0);
    rezultat = Znamenke(broj);
    printf("Znamenke: %d", rezultat);

    return 0;
}

//zad3
double Srednja(int x, int y) {
    int suma = 0, broj = 0;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 == 0) {
            suma += i;
            broj++;
        }
    }

    if (broj == 0)
        return 0;

    return (double)suma / broj;
}

int skupina_e_zad3() {
    int x, y;
    printf("Unjeti x: ");
    scanf_s("%d", &x);
    printf("Unjeti y: ");
    scanf_s("%d", &y);

    double rezultat = Srednja(x, y);

    if (rezultat == 0)
        printf("Nema parnih brojeva izmedu %d i %d.\n", x, y);
    else
        printf("Srednja vrijednost parnih brojeva izmedu %d i %d je: %.2f\n", x, y, rezultat);

    return 0;
}
