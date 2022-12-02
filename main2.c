#include <stdio.h>

int main()
{
	// 1. priklad
	/*
	double vyska, hmotnost;
	
	printf("Zadejte prosim svou vysku a vahu:\n");
	scanf_s("%lf%lf", &vyska, &hmotnost);
	
	float bmi = hmotnost / (vyska * vyska);

	if (bmi < 16) {
		printf("Podvyziva III, Sleva na doplnek na nabrani vahy - BMI = %lf\n", bmi);
	}
	else if (bmi < 17) {
		printf("Podvyziva II, Sleva na doplnek na nabrani vahy - BMI = %lf\n", bmi);
	}
	else if (bmi < 18.5) {
		printf("Podvyziva I, Sleva na doplnek na nabrani vahy - BMI = %lf\n", bmi);
	}
	else if (bmi < 25) {
		printf("Normalni vaha - BMI = %lf\n", bmi);
	}
	else if (bmi < 30) {
		printf("Nadvaha, Sleva na doplnek na hubnuti - BMI = %lf\n", bmi);
	}
	else if (bmi < 35) {
		printf("Obezita, Sleva na doplnek na hubnuti - BMI = %lf\n", bmi);
	}
	else {
		printf("Extremni obezita, Sleva na doplnek na hubnuti - BMI = %lf\n", bmi);
	}
	*/

	// 2. priklad
	/*	
	int test_A = 49;
	int test_B = 49;

	if (test_A > 50 && test_B > 50)
	{
		printf("Student prosel obema testy\n");
	}
	else if (test_A > 50 || test_B > 50)
	{
		printf("Student prosel jednim testem\n");
	}
	else {
		printf("Student neprosel\n");
	}
	*/

	// 3. priklad
	/*
	void Swap(int* pa, int* pb) // funkce ma parametry
	{
	int tmp = *pa; // operator indirekce (operator dereference)
	*pa = *pb;
	*pb = tmp;
	}

	vypis(int a, int b, int c)
	{
	printf("Hodnoty promennych\n");
	printf("a = %d, b = %d, c = %d", a, b, c);
	}
	*/
	// cast main
	/*
	{
	/*
	int a = 5;
	int b = 3;
	int c = 30;

	if (a > b && a > c)
	{
		printf("A je nejvetsim cislem\n");
	}
	else if (b > c && b > a)
	{
		printf("B je nejvetsim cislem\n");
	}
	else if (c > a && c > b)
	{
		printf("C je nejvetsim cislem\n");
	}
	*/

	/*
	int a = 0;
	int b = 3;
	int c = 1;

	if ((a > b && a < c) || (a < b && a > c))
	{
		printf("A je druhym nejvetsim cislem\n");
	}
	else if ((b > c && b < a) || (b < c && b > a))
	{
		printf("B je druhym nejvetsim cislem\n");
	}
	else if ((c > a && c < b) || (c < a && c > b))
	{
		printf("C je druhym nejvetsim cislem\n");
	}
	*/ 

	/*
	int test_A = 50;
	int test_B = 30;
	int test_C = 50;

	if ((test_A > 50 && test_B > 50 && test_C <= 50) || (test_A > 50 && test_B <= 50 && test_C > 50))
	{
		printf("Student splnil presne dva testy\n");
	}
	else if ((test_B > 50 && test_C > 50 && test_A <= 50) || (test_B > 50 && test_C <= 50 && test_A > 50))
	{
		printf("Student splnil presne dva testy\n");
	}
	else if ((test_C > 50 && test_B > 50 && test_A <= 50) || (test_C > 50 && test_B <= 50 && test_A > 50))
	{
		printf("Student splnil presne dva testy\n");
	}
	*/

	/*
	int pocet = 0;
	if (a > 50) ++pocet;
	if (b > 50) ++pocet;
	if (c > 50) ++pocet;

	if (pocet == 2) printf("Presne dva");
	*/
	/*
	int a = 3;
	int b = 2;
	int c = 1;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	if (a > b)
	{
		Swap(&a, &b);
	}
	if (b > c)
	{
		Swap(&b, &c);
	}
	if (a > b)
	{
		Swap(&a, &b);
	}
	printf("a = %d, b = %d, c = %d\n", a, b, c); 
	*/

	// 4. priklad
	/*
	int delka_retezce(char* retezec)
	{
	int i = 0;

	while (retezec[i] != 0)
	{
		i++;
	}
	return i;
	}
	*/
	// cast main
	/*
	{
	char original[] = "1000000";

	int delka = strlen(original);

	printf("delka: %d\n", delka);

	char kopie[255];
	int j = 0;

	for (int i = 0; i < delka; i++)
	{
		int index = delka - i - 1;

		kopie[j++] = original[i];

		if (index % 3 == 0)
		{
			kopie[j++] = ' ';
		}
	}
	kopie[j] = 0;

	printf("%s\n", kopie);
	*/

	// 5. priklad
	/*
	void UcetnickyFormat(char* buffer, char* original, int bufferLength)
	{
	int originalLength = strlen(original);

	int zbytek = originalLength % 3;
	int pocetTrojic = originalLength / 3;

	assert(bufferLength > originalLength + pocetTrojic);

	int i = 0;
	int j = 0;

	while (i < zbytek)
	{
		buffer[j++] = original[i++];
	}

	buffer[j++] = ' ';

	while (i < originalLength)
	{
		buffer[j++] = original[i++];
		buffer[j++] = original[i++];
		buffer[j++] = original[i++];
		buffer[j++] = ' ';
	}

	buffer[j - 1] = 0;
	}

	#define LENGTH 255
	*/
	// cast main
	/*
	{
	char original[] = "1000000";
	char buffer[LENGTH];

	UcetnickyFormat(buffer, original, LENGTH);

	printf("%s\n", buffer);
	*/

	// 6. priklad
	/*	
	//#1
	for (int a = 0; a < 10; a++)
	{
		printf("%d ", a);
	}

	//#2


	//#3
	for (int c = 1; c < 257; c *= 2)
	{
		printf("%d ", c);
	}

	//#4
	/*for (int d = 0; d < 17; d++)
	{
		printf("%d ", d);
	}
	*/

	return 0;
}