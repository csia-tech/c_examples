#include <stdio.h>
#include <stdlib.h>
#include "../chapter_3/class_work.h"
int main() {
	char *sAmount;// main amount variable
	double dTip=0,dAmount=0; // tip variable
	int bTest; // used to test contents of string
	printf("Please enter the amount of your meal [must enter a number].\n");
	sAmount = readLine();
	dAmount = strtod(sAmount,NULL);
	dAmount = dAmount * 0.06 + dAmount; // calculate tax
	if ( dAmount >= .01 && dAmount <= 5.99 ) dTip = .1; // figure out what tip to charge
	if ( dAmount >=  6 && dAmount <= 12 ) dTip = .13 ;
	if ( dAmount >= 12.01 && dAmount <= 17 ) dTip = .16 ;
	if ( dAmount >= 17.01 && dAmount <= 25 ) dTip = .19 ;
	if ( dAmount >= 25.01 ) dTip = .22 ;
	else if ( dAmount <= 0 ) // exit if they entered 0 and tell'em to try again
	{
		printf("You entered 0 or less, try again.\n");
		return 0;
	}
	dAmount = dAmount * dTip + dAmount;// calculate total
	printf("Total cost of meal was $ %f",dAmount);
	printf(". You paid this tip %f", (dTip * 100));
	printf(" percent. 6 percent sales tax was charged.\n"); 
}
