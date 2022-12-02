#include <stdio.h>
#include <math.h>

int main()
{
	// 1. priklad
	/*
	double a = 10, b = 5, c = 16;
	int klavesa;
	printf("Vypocet Trojuhelnika\n");
	do {
		printf("Vlozte delky stran a, b, c a ENTER: ");
		int status = scanf("%lf%lf%lf", &a, &b, &c);
		if (status<3) {
			printf("Chybne zadane cislo!\n");
		}
		while (getchar() != '\n') { }
		if (status==3) {
			if (a+b > c) {
				printf("Trojuhelnik existuje.\n");
			} else {
				printf("Trojuhelnik NEexistuje.\n");
			}
			printf("Uhel alfa=%f stupnu\n", asin(a/c)*180/M_PI);
		}
		printf("Chcete pocitat dalsi trojuhelnik? A/N\n");
		klavesa = getchar();
	} while (klavesa=='A');
	*/

	// 2. priklad
	/*
	double a, b, c, d, koren1, koren2;

	printf("Zadejte koeficienty a, b, c:\n");
	int status = scanf("%lf%lf%lf", &a, &b, &c);

	if (status<3){
		printf("Chybne zadane cislo!\n");
		return 0;
	}

	else {
		d = b * b - 4 * a * c;

		if (d > 0) {
			koren1 = -b + sqrt(d) / (2 * a);
			koren2 = -b - sqrt(d) / (2 * a);
			printf("Koren 1 = %.2lf, Koren 2 = %.2lf\n", koren1, koren2);
		}

		else if (d == 0) {
			koren1 = (koren2) = -b / (2 * a);
			printf("Koreny jsou totozne s hodnotou = %.2lf\n", koren1);
		}

		else {
			printf("Rovnice nema reseni v oboru realnych cisel\n");
		}
	}
	*/

	// 3. priklad
	/*
	Reseni rovnic:
	x+y=8
	2x-y=1

	for (int x = -100; x <= 100; x++) {
		for (int y = -100; y <= 100; y++) {
			if (x + y == 8 && 2 * x - y == 1) {
				printf("Reseni: x=%d, y=%d\n", x, y);
			}
		}
	}
	*/

	// 4. priklad
	/*
	int K1=1+2+3+4+5+6+7+8+9;
	int K2=1*2*3*4*5*6*7*8*9;
	int pocet=0;
	for (int A=2; A<=9; A++) {
		for (int BC=100/A; BC<=98; BC++) {
			int DEF = A*BC;
			if (BC%11!=0 && BC%10!=0 &&  DEF>99) {
				for (int I=2; I<=9; I++) {
					if (A==I) continue;
					int GH = DEF / I;
					if (GH<100 && GH * I == DEF) {
						char cifry[20];
						sprintf(cifry, "%d%d%d%d%d\n",
								A, BC, DEF, GH, I);
						int soucet=0, nasobek=1;
						for (int i=0; i<9; i++) {
							soucet=soucet+cifry[i]-'0';
							nasobek=nasobek*(cifry[i]-'0');
						}
						if (soucet==K1 && nasobek==K2) {
							pocet++;
							printf("%d * %d = %d = %d * %d\n",
								   A, BC, DEF, GH, I);
						}
					}
				}
			}
		}
	}
	printf("Pocet=%d\n", pocet);
	*/

	// 5. priklad
	/*
	int cetnost[256];
	do {
		for (int i=0; i<256; i++)
			cetnost[i]=0;
		char retezec[1024]="Jeste jednou dobry den";
		printf("Zadejte retezec nebo CTRL+Z pro konec:\n");
		int status = scanf("%[0-9a-zA-Z ,]", retezec);
		if (status<1) return 0;
		printf("Vypocet cetnosti retezce: %s\n",
			   retezec);
		int i = 0;
		unsigned char znak;
		while ((znak=retezec[i]) != 0) {
			cetnost[znak]++;
			i++;
		}
		for (i=0; i<256; i++) {
			int cet=cetnost[i];
			if (cet>0)
				printf("%c: %d\n", i, cet);
		}
	} while (1);
	*/

	// 6. priklad
	/*
	int pole[70];
	int vysledek = 0;
	int i = 0;
	for (i = 0; i<70; i++) {
		printf("Vlozte cisla nebo CTRL + Z:\n");
		int status = scanf("%d", &pole[i]);
		if (status == -1) break;

		vysledek = vysledek + pole[i];
	}
	double prumer = (double)vysledek / (i);
	printf("prumer = %f", prumer);


	printf("Serazeni pole:\n");
	int pocet = i;
	for (int i=0; i<pocet; i++) {
		for (int j=0; j<pocet-1-i; j++) {
			if (pole[j]>pole[j+1])    {
				int pom=pole[j];
				pole[j]=pole[j+1];
				pole[j+1]=pom;
			}
		}
	}

	int median = 0;
	if (i==0) {
		median = pole[i];
	} else {
		median = pole[i/2];
	}

	printf("median je: %d, i je %d\n", median, i);

	for (int i=0; i<pocet; i++) {
		printf("%d\n", pole[i]);

	}
	*/

	// 7. priklad
	/*
	char * razeni(char pole[]) {
	int pocet = strlen(pole);
	for (int i=0; i<pocet; i++) {
		for (int j=0; j<pocet-1-i; j++) {
			if (pole[j]>pole[j+1])    {
				int pom=pole[j];
				pole[j]=pole[j+1];
				pole[j+1]=pom;
			}
		}
	}
	return pole;
	*/
	// druh· cast
	/*
	int main()
	{
	char slovnik[1000][50]={
		"reklama", "makrela", "karamel",
		"loket", "kotel", "chleba", "blecha"
	};
	printf("Jak hledat anagramy?\n");

	for (int i=0; i<7; i++) 
	{
		char pom[50];       //vytvorim vyhledavaci klic pro anagramy:
		strcpy(pom, slovnik[i]);
		printf("%s - %s\n", slovnik[i], razeni(pom));
	}
	*/

	// 8. priklad
	/*    
	int pole[]={100, 65, 48, 36, 21, 11, 2};
    int pocet = sizeof (pole) / sizeof (int);
    printf("Serazeni pole:\n");
    for (int i=0; i<pocet; i++) {
        for (int j=0; j<pocet-1-i; j++) {
            if (pole[j]>pole[j+1])    {
                int pom=pole[j];
                pole[j]=pole[j+1];
                pole[j+1]=pom;
            }
        }
    }
    for (int i=0; i<pocet; i++) {
        printf("%d\n", pole[i]);
    }
	*/

	// 9. priklad
	/*void tiskniPole(char pole[10][10]) {
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            //printf("%c", pole[i][j]);
            if (pole[i][j]==0) putchar('.');
            else putchar(pole[i][j]);
        }
        putchar('\n');
    }
	}
	int * razeni(int pole[], int pocet) {
    for (int i=0; i<pocet; i++) {
        for (int j=0; j<pocet-1-i; j++) {
            if (pole[j]>pole[j+1])    {
                int pom=pole[j];
                pole[j]=pole[j+1];
                pole[j+1]=pom;
            }
        }
    }
    return pole;
	}

	int max2(int a, int b) {
    if (a>b) return a;
    else if (a==b) return a;
    else return b;
	}


	int maximum(int pole[], int pocet) {
    int max=pole[0];
    for (int i=1; i<pocet; i++) {
        if (pole[i] > max)
            max=pole[i];
    }
    return max;
	}
	int max3(int a, int b, int c) {
    int pole[3] = {a,b,c};
    return maximum(pole,3);
	}

	typedef unsigned char mujChar;
	typedef int mojePole[10];


	int *  generujNahodnaCisla(int pocet, int pole[]) {
    srand(time(NULL));
    for (int i=0; i<pocet; i++) {
        int cislo=rand();
        pole[i]=cislo;
    }
    return pole;
	}
	*/
	// cast main
	/*
	{
    char polePiskvorek[10][10]={
      {'x', 'o', '.'},
       // "..xo....." - bacha, 10. znak je ==0
        {'.', 'x', 'o', '.'},

    };
    tiskniPole(polePiskvorek);
    int p[10];
    generujNahodnaCisla(10, p);
    printf("Vysledek max2=%d\n", max2(10,20));
    printf("Vysledek max3=%d\n", max3(100,10,20));
    printf("Vysledek maximum=%d\n",
           maximum(p, 4));
    // maximum ( (int[]){-10,-9,-5,-1},  4);
	*/

	// 10. priklad
	/*
	void tiskniPole (char pole[10][10]) {
    for (int x=0; x<10; x++) {
        for (int y=0; y<10; y++) {
            if (pole[x][y] == 0) putchar ('.');
            else putchar (pole [x][y]);
        }
        putchar ('\n');
    }
	}
	*/
	// cast main
	/*
	int main()
	{
    char polePiskvorek[10][10] = {
        {'x', 'o', '.'}, {'x', 'o', '.'}
    };
    tiskniPole (polePiskvorek);
    return 0;
	*/

	// 11. priklad
	/*
	typedef  struct {
    char jmeno[256];
    char prijmeni[256];
    int rok_narozeni;
    double vaha;
	} tClovek;
	void tiskniCloveka(tClovek clovek) {
    printf("Jmeno: %s, prijmeni: %s, "
           "narozen: %d, vaha: %f\n",
           clovek.jmeno, clovek.prijmeni,
           clovek.rok_narozeni, clovek.vaha);
	}
	*/
	// cast main
	/*
	int main()
	{
    tClovek franta, pepa = {"Josef", "Novak", 1960, 80.3};
    tClovek dbStudentu[1000] = {
        {"Josef", "Novak", 1960, 80.3},
        {"Adam", "Polasek", 1990, 74.0},
        {"Jiri", "Korn", 1948, 79.0},

    };
    printf("Zadejte lidi, ukoncene CTRL+Z:");
    for (int i=0; i<1000; i++) {
        int status=scanf("%255s%255s%d%lf",
                         dbStudentu[i].jmeno,
                         dbStudentu[i].prijmeni,
                         &dbStudentu[i].rok_narozeni,
                         &dbStudentu[i].vaha);
        if (status<0) break;
        if (status==4) printf("OK");
        else printf("Chyba vstupu, status = %d\n", status);
    }
    tiskniCloveka(dbStudentu[0]);
	*/

	// 12. priklad
	/*    
	int x=10, y=100; // toto jsou bÏûnÈ promÏnnÈ.
    printf("x=%d\n", x); // x m· hodnotu 10.

    printf("Adresa x=%p, y=%p, main=%p\n",
           &x, &y, printf );     // adresa je vlastnÏ konstatnÌ ukazatel
    // int * uk = (void *)0x61FE0C; // zde tvo¯Ìm ukazatel z konstanty. Konstantu zmÏÚte dle v˝pisu adresy x na konzole (z ¯·dku 8).
    int * uk = &x;
    *uk=20; // zde zmÏnÌm promÏnnou x na 20
    printf("x=%d\n", x); // x m· teÔ hodnotu 20!
    printf("uk=%p\n", uk); // v˝pis obsahu promÏnnÈ uk - obsahuje adresu x
    printf("*uk=%d\n", *uk); // v˝pis bunÏk pamÏti, kam uk ukazuje = je tam promÏnn· x

    int * uk1=uk;
    uk--;           // uk1 bude ukazovat na dalöÌ lok·lnÌ promÏnnou, tj. y
    printf("po dekrementaci: uk=%p\n", uk);
    printf("*uk=%d\n", *uk); // vypÌöe se hodnota y
	*/

	// 13. priklad
	/*
	char * uk = malloc(1000000000);
    if (uk==NULL) {
        printf("Alokace se nepodarila, konec\n");
        return 0;
    }
    printf("OK...\n");
    for (unsigned int i=0; i<1000000000; i++) {
        uk[i] = rand();
    }
	printf("hotovo...\n");
	free(uk);
    getchar();
    return 0;
	*/

	// 14. priklad
	/*
	char * reverse(char ret[]) {
    int levy=0, pravy=0;
    while(ret[pravy]!=0) pravy++;
    pravy--;
    while (levy<pravy) {
        char pom=ret[levy];
        ret[levy]=ret[pravy];
        ret[pravy]=pom;
        levy++; pravy--;
    }
    return ret;
	}
	char * reverse_copy(char ret[]) {
    int levy=0, pravy=0;
    while(ret[pravy]!=0) pravy++;
    char * uk = malloc(pravy+1);
    pravy--;
    while (pravy>=0) {
        uk[levy] = ret[pravy];
        levy++; pravy--;
    }
    return uk;
	}
	*/
	// cast main
	/*
	int main()
	{
    char r[]="ahojky";
    printf("reverse()=%s\n", reverse(r));
    printf("r= %s\n", r);
    char * rev=reverse_copy(r);
    printf("rev= %s\n", rev);
    printf("r= %s\n", r);
    free(rev);
	*/

	// 15. priklad
	/*
	char ** nactiRetezce() {
    char **pole = malloc(1000*sizeof(char*));
    int status;
    char ret[256];
    int i=0;
    while ((status=scanf("%255s", ret))>=0) {
        char * novy=malloc(strlen(ret)+1);
        strcpy(novy, ret);
        pole[i++]=novy;
    }
    pole[i]=NULL;
    return pole;
	}
	char * reverse(char ret[]) {
    int levy=0, pravy=0;
    while(ret[pravy]!=0) pravy++;
    pravy--;
    while (levy<pravy) {
        char pom=ret[levy];
        ret[levy]=ret[pravy];
        ret[pravy]=pom;
        levy++; pravy--;
    }
    return ret;
	}
	char * reverse_copy(char ret[]) {
    int levy=0, pravy=0;
    while(ret[pravy]!=0) pravy++;
    char * uk = malloc(pravy+1);
    pravy--;
    while (pravy>=0) {
        uk[levy] = ret[pravy];
        levy++; pravy--;
    }
    return uk;
	}

	char * cs2ascii(char ret[]) {
    char csznaky[]="ÏöË¯û˝·ÌÈ˙˘ÛÚÔùæÃä»ÿé›¡Õ…⁄Ÿ”“œçº";
    char enznaky[]="escrzyaieuuondtlESCRZYAIEUUONDTL";
    char tab[256];
    int i;
    for (i=0;i<256;i++) tab[i]=0;
    i=0;
    while (csznaky[i]!=0) {
        char csznak=csznaky[i];
        tab[csznak]=enznaky[i++];
    }
    i=0;
    while (ret[i]!=0) {
        char znak=ret[i];
        if (tab[znak]!=0)
            ret[i]=tab[znak];
        i++;
    }
    return ret;
	}
	*/
	// cast main
	/*
	int main()
	{
    char **p=nactiRetezce();
    int i=0;
    while (p[i]!=NULL) printf("%s\n", p[i++]);
    char r[]="Ëauky";
    printf("cs=%s\n", cs2ascii(r));

    printf("reverse()=%s\n", reverse(r));
    printf("r= %s\n", r);
    char * rev=reverse_copy(r);
    printf("rev= %s\n", rev);
    printf("r= %s\n", r);
    free(rev);
	*/

	return 0;
}

