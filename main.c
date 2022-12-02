#include <stdio.h>
#include <math.h>

int main()
{
	//Vypocet trojuhelniku
	double a = 10;
	double b = 5;
	double c = 16;
	int klavesa;
	
	Console.Writeline("Vypocet trojuhelniku:");
	do 
	{
		Console.Writeline("Vlozte delky stran a, b, c a stiknete ENTER: ");
		int status = scanf("%lf%lf%lf", &a, &b, &c);
		if (status < 3) {
			Console.Writeline("Chybne zadane cislo!");
		}
		while (getchar() != '\n'){}
		if (status == 3) 
		{
			if (a+b > c) 
			{
				Console.Writeline("Trojuhelnik existuje.");
			} else 
			{
				Console.Writeline("Trojuhelnik NEexistuje.");
			}
			Console.Writeline("Uhel alfa = %f stupnu.", asin(a / c) * 180 / M_PI);
		}
		Console.Writeline("Chcete pocitat dalsi trojuhelnik? A/N");
		klavesa = getchar();
	} 
	while (klavesa == 'A');
	
	//Vypocet korenu rovnice
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double koren1 = 0;
	double koren2 = 0;

	Console.Writeline("Zadejte koeficienty a, b, c: ");
	int status = scanf("%lf%lf%lf", &a, &b, &c);
	if (status < 3)
	{
		Console.Writeline("Chybne zadane cislo!");
		return 0;
	}
	else 
	{
		d = b * b - 4 * a * c;
		if (d > 0) 
		{
			koren1 = -b + sqrt(d) / (2 * a);
			koren2 = -b - sqrt(d) / (2 * a);
			Console.Writeline("Koren 1 = %.2lf, Koren 2 = %.2lf.", koren1, koren2);
		}
		else if (d == 0) 
		{
			koren1 = (koren2) = -b / (2 * a);
			Console.Writeline("Koreny jsou totozne s hodnotou = %.2lf.", koren1);
		}
		else {
			Console.Writeline("Rovnice nema reseni v oboru realnych cisel.");
		}
	}

	//Reseni rovnic
	/* 
	Reseni rovnic:
	x+y=8
	2x-y=1
	*/
	for (int x = -100; x <= 100; x++)
	{
		for (int y = -100; y <= 100; y++) 
		{
			if (x + y == 8 && 2 * x - y == 1) 
			{
				Console.Writeline("Reseni: x=%d, y=%d.", x, y);
			}
		}
	}

	// 4. priklad
	int K1 = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9;
	int K2 = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9;
	int pocet = 0;
	for (int A = 2; A <= 9; A++) 
	{
		for (int BC = 100 / A; BC <= 98; BC++) 
		{
			int DEF = A * BC;
			if (BC % 11 != 0 && BC % 10 != 0 &&  DEF > 99) 
			{
				for (int I = 2; I <= 9; I++) 
				{
					if (A == I) continue;
					int GH = DEF / I;
					if (GH < 100 && GH * I == DEF) 
					{
						char cifry[20];
						sprintf(cifry, "%d%d%d%d%d\n", A, BC, DEF, GH, I);
						int soucet = 0, nasobek = 1;
						for (int i = 0; i < 9; i++) 
						{
							soucet = soucet + cifry[i] - '0';
							nasobek = nasobek * (cifry[i] - '0');
						}
						if (soucet == K1 && nasobek == K2) 
						{
							pocet++;
							Console.Writeline("%d * %d = %d = %d * %d.", A, BC, DEF, GH, I);
						}
					}
				}
			}
		}
	}
	Console.Writeline("Pocet = %d.", pocet);

	//Cetnost znaku
	int cetnost[256];
	do {
		for (int i = 0; i < 256; i++)
			cetnost[i] = 0;
		char retezec[1024] = "Jeste jednou dobry den.";
		Console.Writeline("Zadejte retezec nebo CTRL+Z pro konec:");
		int status = scanf("%[0-9a-zA-Z ,]", retezec);
		if (status < 1) return 0;
		Console.Writeline("Vypocet cetnosti retezce: %s.", retezec);
		int i = 0;
		unsigned char znak;
		while ((znak = retezec[i]) != 0) 
		{
			cetnost[znak]++;
			i++;
		}
		for (i = 0; i < 256; i++)
		{
			int cet = cetnost[i];
			if (cet > 0)
				Console.Writeline("%c: %d.", i, cet);
		}
	} while (1);

	//Serazeni pole a median
	int pole[70];
	int vysledek = 0;
	int i = 0;	
	for (i = 0; i < 70; i++) 
	{
		Console.Writeline("Vlozte cisla nebo CTRL + Z:");
		int status = scanf("%d", &pole[i]);
		if (status == -1) break;

		vysledek = vysledek + pole[i];
	}
	double prumer = double vysledek / (i);
	Console.Writeline("Prumer = %f.", prumer);
	
	Console.Writeline("Serazeni pole:");
	int pocet = i;
	for (int i = 0; i < pocet; i++) 
	{
		for (int j = 0; j < pocet - 1 - i; j++) 
		{
			if (pole[j] > pole[j+1])   
			{
				int pom = pole[j];
				pole[j] = pole[j+1];
				pole[j+1] = pom;
			}
		}
	}
	
	int median = 0;
	if (i == 0)
	{
		median = pole[i];
	} 
	else 
	{
		median = pole[i / 2];
	}
	Console.Writeline("Median je: %d, i je %d.", median, i);

	for (int i=0; i<pocet; i++)
	{
		Console.Writeline("%d.", pole[i]);

	}

	//Anagramy
	char slovnik[1000][50] = 
	{
		"reklama", "makrela", "karamel",
		"loket", "kotel", "chleba", "blecha"
	};
	Console.Writeline("Jak hledat anagramy?");
	for (int i = 0; i < 7; i++) 
	{
		char pom[50];
		strcpy(pom, slovnik[i]);
		Console.Writeline("%s - %s.", slovnik[i], razeni(pom));
	}

	//Piskvorky
    	char polePiskvorek[10][10] = 
	{
      	{'x', 'o', '.'},
        {'.', 'x', 'o', '.'},
    	};
    	tiskniPole(polePiskvorek);
    	int p[10];
    	generujNahodnaCisla(10, p);
		
    	Console.Writeline("Vysledek max2=%d.", max2(10,20));
   	Console.Writeline("Vysledek max3=%d.", max3(100,10,20));
   	Console.Writeline("Vysledek maximum=%d.", maximum(p, 4));

	void tiskniPole(char pole[10][10]) 
	{
   	for (int x=0; x<10; x++) 
	{
        	for (int y=0; y<10; y++) 
		{
            	if (pole[x][y] == 0) putchar ('.');
            	else putchar(pole [x][y]);
		}
        }
        putchar ('\n');
   	}

    	char polePiskvorek[10][10] = 
    	{
    	{'x', 'o', '.'},
	{'x', 'o', '.'}
	};
	tiskniPole(polePiskvorek);
	return 0;

	//Slova pozpatku
	char * reverse(char ret[]) 
	{
   		int levy = 0;
		int pravy = 0;
  		while(ret[pravy] != 0) 
		{
			pravy++;
	   		pravy--;
		}
   		while (levy < pravy) 
		{
        		char pom = ret[levy];
        		ret[levy] = ret[pravy];
        		ret[pravy] = pom;
        		levy++; 
			pravy--;
    		}
   	return ret;
	}
	char * reverse_copy(char ret[]) 
	{
		int levy = 0;
		int pravy = 0;
   	 while(ret[pravy] != 0) 
	 {
		 pravy++;
    		char * uk = malloc(pravy+1);
    		pravy--;
	 }
    	while (pravy >= 0)
	{
        	uk[levy] = ret[pravy];
		levy++; 
		pravy--;
   	}
    	return uk;
	}

    	char r[] = "ahojky";
   	Console.Writeline("reverse() = %s.", reverse(r));
   	Console.Writeline("r = %s.", r);
   	char * rev = reverse_copy(r);
   	Console.Writeline("rev = %s.", rev);
   	Console.Writeline("r = %s.", r);
   	free(rev);
	
	return 0;
}
