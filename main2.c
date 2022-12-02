#include <stdio.h>

int main()
{
	//Kalkulačka BMI	
	double vyska = 0;
	double hmotnost = 0;
	
	Console.Writeline("Zadejte prosim svou vysku a vahu:");
	scanf_s("%lf%lf", &vyska, &hmotnost);
	
	float bmi = hmotnost / (vyska * vyska);
	if (bmi < 16) 
	{
		Console.Writeline("Podvyziva III, Sleva na doplnek na nabrani vahy - BMI = %lf.", bmi);
	}
	else if (bmi < 17) 
	{
		Console.Writeline("Podvyziva II, Sleva na doplnek na nabrani vahy - BMI = %lf.", bmi);
	}
	else if (bmi < 18.5) 
	{
		Console.Writeline("Podvyziva I, Sleva na doplnek na nabrani vahy - BMI = %lf.", bmi);
	}
	else if (bmi < 25) 
	{
		Console.Writeline("Normalni vaha - BMI = %lf.", bmi);
	}
	else if (bmi < 30) 
	{
		Console.Writeline("Nadvaha, Sleva na doplnek na hubnuti - BMI = %lf.", bmi);
	}
	else if (bmi < 35) 
	{
		Console.Writeline("Obezita, Sleva na doplnek na hubnuti - BMI = %lf.", bmi);
	}
	else 
	{
		printf("Extremni obezita, Sleva na doplnek na hubnuti - BMI = %lf\n", bmi);
	}

	//Úspěšnost testů
	int test_A = 49;
	int test_B = 49;
	if (test_A > 50 && test_B > 50)
	{
		Console.Writeline("Student prosel obema testy.");
	}
	else if (test_A > 50 || test_B > 50)
	{
		Console.Writeline("Student prosel jednim testem.");
	}
	else {
		Console.Writeline("Student neprosel.");
	}
	
	int test_A = 50;
	int test_B = 30;
	int test_C = 50;
	if ((test_A > 50 && test_B > 50 && test_C <= 50) || (test_A > 50 && test_B <= 50 && test_C > 50))
	{
		Console.Writeline("Student splnil presne dva testy.");
	}
	else if ((test_B > 50 && test_C > 50 && test_A <= 50) || (test_B > 50 && test_C <= 50 && test_A > 50))
	{
		Console.Writeline("Student splnil presne dva testy.");
	}
	else if ((test_C > 50 && test_B > 50 && test_A <= 50) || (test_C > 50 && test_B <= 50 && test_A > 50))
	{
		Console.Writeline("Student splnil presne dva testy.");
	}
	
	//Seřazení čísel
	int a = 5;
	int b = 3;
	int c = 30;
	if (a > b && a > c)
	{
		Console.Writeline("A je nejvetsim cislem.");
	}
	else if (b > c && b > a)
	{
		Console.Writeline("B je nejvetsim cislem.");
	}
	else if (c > a && c > b)
	{
		Console.Writeline("C je nejvetsim cislem.");
	}

	int a = 0;
	int b = 3;
	int c = 1;
	if ((a > b && a < c) || (a < b && a > c))
	{
		Console.Writeline("A je druhym nejvetsim cislem.");
	}
	else if ((b > c && b < a) || (b < c && b > a))
	{
		Console.Writeline("B je druhym nejvetsim cislem.");
	}
	else if ((c > a && c < b) || (c < a && c > b))
	{
		Console.Writeline("C je druhym nejvetsim cislem.");
	}
	return 0;
}
