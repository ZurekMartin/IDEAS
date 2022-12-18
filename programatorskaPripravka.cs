using System;

namespace ProgramatorskaPripravka
{
	class Program
    	{
        	static void Main()
        	{
	  		//Vypocet trojuhelniku
	        	double stranaA = 3;
	        	double stranaB = 4;
    	   		double stranaC = 5;

			Console.WriteLine("Vypocet trojuhelniku:");
			if (stranaA + stranaB > stranaC) 
			{
				Console.WriteLine("Trojuhelnik existuje.");
		    	} 
		  	else 
		 	{
				Console.WriteLine("Trojuhelnik NEexistuje.");
            		}
            
	        	//Vypocet korenu rovnice
	       		double a = 1;
	        	double b = 1;
	        	double c = 1;
	        	double d = 0;
        		double koren1 = 0;
        		double koren2 = 0;

	    		d = b * b - 4 * a * c;
		    	if (d > 0) 
		    	{
		    		koren1 = -b + Math.Sqrt(d) / (2 * a);
		    		koren2 = -b - Math.Sqrt(d) / (2 * a);
		    		Console.WriteLine("Koren 1 = {0}, koren 2 = {0}.", koren1, koren2);
		    	}
		    	else if (d == 0) 
		    	{
		    		koren1 = (koren2) = -b / (2 * a);
		    		Console.WriteLine("Koreny jsou totozne s hodnotou = {0}.", koren1);
	    		}
	    		else 
	    		{
			    	Console.WriteLine("Rovnice nema reseni v oboru realnych cisel.");
	    		}

        		//Kalkulačka BMI	
        		double vyska = 1.83;
        		double hmotnost = 61;
	
	        	double bmi = hmotnost / (vyska * vyska);
	        	if (bmi < 16) 
	        	{
	        		Console.WriteLine("Podvyziva 3. stupne, hodnota BMI = {0}.", bmi);
	        	}
        		else if (bmi < 17) 
	        	{
	        		Console.WriteLine("Podvyziva 2. stupne, hodnota BMI = {0}.", bmi);
	        	}
	        	else if (bmi < 18.5) 
        		{
        			Console.WriteLine("Podvyziva 1. stupne, hodnota BMI = {0}.", bmi);
        		}
        		else if (bmi < 25) 
        		{
	        		Console.WriteLine("Normalni vaha, hodnota BMI = {0}.", bmi);
	        	}
	        	else if (bmi < 30) 
        		{
	        		Console.WriteLine("Nadvaha, hodnota BMI = {0}.", bmi);
        		}
        		else if (bmi < 35) 
	        	{
	        		Console.WriteLine("Obezita, hodnota BMI = {0}.", bmi);
        		}
        		else 
        		{
        			Console.WriteLine("Extremni obezita, hodnota BMI = {0}.", bmi);
        		}
        	
	        	//Uspesnost testu
	        	int testA = 49;
        		int testB = 50;
        		int testC = 51;
        	
	        	if (testA > 50 && testB > 50 && testC > 50)
	        	{
        			Console.WriteLine("Student prosel vsemi testy.");
        		}
        		else if (testA > 50 || testB > 50 || testC > 50)
        		{
        			Console.WriteLine("Student prosel alespon jednim testem.");
        		}
        		else if (testA < 50 && testB < 50 && testC < 50)
        		{
        			Console.WriteLine("Student neprosel zadnym testem.");
        		}
        	
	        	//Serazeni cisel
        		int x = 3;
        		int y = 4;
	        	int z = 5;
	        
	        	if (x > y && x > z)
	        	{
	        		Console.WriteLine("X je nejvetsim cislem.");
        		}
        		else if (y > z && y > x)
        		{
        			Console.WriteLine("Y je nejvetsim cislem.");
        		}
        		else if (z > x && z > y)
        		{
        			Console.WriteLine("Z je nejvetsim cislem.");
        		}
        		if ((x > y && x < z) || (x < y && x > z))
        		{
        			Console.WriteLine("X je druhym nejvetsim cislem.");
        		}
        		else if ((y > z && y < x) || (y < z && y > x))
        		{
        			Console.WriteLine("Y je druhym nejvetsim cislem.");
        		}
        		else if ((z > x && z < y) || (z < x && z > y))
        		{
        			Console.WriteLine("Z je druhym nejvetsim cislem.");
        		}
            		if (x < y && x < z)
	        	{
	        		Console.WriteLine("X je nejmensim cislem.");
        		}
        		else if (y < z && y < x)
        		{
        			Console.WriteLine("Y je nejmensim cislem.");
        		}
        		else if (z < x && z < y)
        		{
        			Console.WriteLine("Z je nejmensim cislem.");
        		}
        	} 
    	}
}
