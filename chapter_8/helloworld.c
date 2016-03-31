#include<stdio.h>
#include <stdlib.h>
#include "../chapter_3/class_work.h"
//ask for minutes used and minutes on contract
//compute overage
//add base bill to monthly cost
//computer overage charge
//print info
//sscanf for int parse
void main()
{
	char *cMin, *cUsed;
	int iMin, iUsed,iOver;
	double dBill;
	printf("How many minutes on your mobile plan?\n");
	cMin = readLine();
	sscanf(cMin, "%d", &iMin);
	printf("How many minutes did you use?\n");
	cUsed = readLine();
	sscanf(cUsed, "%d", &iUsed);
	iOver = iMin - iUsed;
	if ( iOver > 0 ) iOver = 0;
	else iOver = iOver * -1;
	dBill = 70 + (double)iOver * .7;
	printf("You bill is %f and you went over %d minutes.\n",dBill, iOver);

}
