#include<stdio.h>

//zad1
int skupina_a_zad1() {
	int broj;

	do {
		printf("Unjeti troznamenkasti broj: ");
		scanf_s("%d", &broj);
	} while (broj < 100 || broj > 999);

	int stotica = broj / 100;
	int desetica = (broj / 10) % 10;
	int jedinica = broj % 10;

	int najveci = stotica;
	if (desetica > najveci)
		najveci = desetica;
	if (jedinica > najveci)
		najveci = jedinica;

	int umnozak;
	if (najveci == stotica)
		umnozak = desetica * jedinica;
	else if (desetica == najveci)
		umnozak = stotica * jedinica;
	else
		umnozak = stotica * desetica;

	printf("Najveca znamenka je %d, a umnozak preostale dvije znamenke je %d.", najveci, umnozak);
	return 0;
}

//zad2
int skupina_a_zad2()
{
	int n, broj, br = 0;

	do {
		printf("Unjeti broj izmedu 5 >= n > 20: ");
		scanf_s("%d", &n);
	} while (n < 5 || n > 20);

	for (int i = 0; i < n; i++)
	{
		printf("Unjeti cijeli broj: ");
		scanf_s("%d", &broj);

		if (broj % 7 == 0 && broj > 15)
			br++;
	}
	printf("Ukupno brojeva djeljivih sa 7 i vecih od 15 je %d.", br);
	return 0;
}

//zad3
int skupina_a_zad3()
{
	char znak1, znak2, pocetak, kraj;

	printf("Unjeti prvi znak: ");
	scanf_s(" %c", &znak1,1);
	printf("Unjeti drugi znak: ");
	scanf_s(" %c", &znak2,1);

	pocetak = (znak1 < znak2) ? znak1 : znak2;
	kraj = (znak1 > znak2) ? znak1 : znak2;

	printf("Znakovi izmedu %c i %c po ASCII vrijednostima su: ", pocetak, kraj);
	for (char i = pocetak + 1; i < kraj;i++) {
		printf("%c", i);
	}
	return 0;
}
