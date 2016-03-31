#include <stdlib.h>
#include <stdio.h>
#include "../chapter_3/class_work.h"
char   getChoice ( char * sChoice ) ;
double setCost ( char * sItem, double * iOrdered ); 
double getCost ( double * dCost );
int main()
{
	char sMenuItem,*cItems;
	double dTotal=0.0, iItems = 1;
	while (1) 
	{
		sMenuItem = getChoice( & sMenuItem);
		if ( sMenuItem == 'x' ) break;
		printf("How many would you like to order?\n");
		cItems = readLine();
		iItems = strtod(cItems,NULL);
		dTotal = dTotal + setCost ( & sMenuItem, &iItems ); 
	}
	dTotal = dTotal + getCost(&dTotal);
	printf("Your total bill, including 6 percent sales tax, is: $ ");
	printf("%f\n",dTotal);
}
char getChoice ( char *sChoice ) 
{
	printf ("Yum Yum Burger Joint Lunch / Dinner menu:\n");
	printf ("[A] Yum Yum Burger: $0.99 dollars\n");
	printf ("[B] Grease Yum Fries: $0.79 dollars\n");
	printf ("[C] Soda Yum: $1.09 dollars\n");
	printf ("[X] Press x when done.\n");
	printf ("Enter in one of the following: [a,b,c,x]:\n");
	sChoice = readLine ();
	while ( 1 ) 
	{
		if ( *sChoice  == 'a' || *sChoice == 'b' || *sChoice =='c' || *sChoice == 'x' ) return *sChoice;
		printf("Please enter in [a,b,c,x]:\n");
		sChoice = readLine ();
	}
}
double setCost ( char * sItem, double * iOrdered ) 
{
	double dCost=*iOrdered;
	if ( *sItem == 'a' ) dCost = 0.99 * *iOrdered;
	if ( *sItem == 'b' ) dCost = 0.79 * *iOrdered;
	if ( *sItem == 'c' ) dCost = 1.09 * *iOrdered;
	printf ("You added an item to your bill.\n");
	return dCost;
}
double getCost ( double * dCost )
{
	double tax=0;
	tax = *dCost * .06;
	printf ("You where taxed!\n");
	return tax;
}


