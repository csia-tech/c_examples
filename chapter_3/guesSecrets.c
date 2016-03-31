#include<stdio.h>
#include <stdlib.h>
#include "class_work.h"
int main()
{    
	char *age, *weight, *month;
	printf("How old are you?\n");
	age = readLine();
	printf("What do you weigh?\n");
	weight = readLine();
	printf("In what month were you born? (use number format)\n");
	month = readLine();
	int iage, iweight, imonth;
	sscanf(age, "%d", &iage);
	sscanf(weight, "%d", &iweight);
	sscanf(month, "%d", &imonth);
	printf("%d %d %d\n", iage, iweight, imonth );
	if ( iage <= 25 ) printf("Congratulations, the age is 25 or less.\n");
	if ( iweight >= 128 ) printf("Congratulations, the weight is 128 or more.\n");
	if ( imonth == 4 ) printf("Congratulations, the birth month is April.\n");
	return 0;
}
