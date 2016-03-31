//enter the energy bills from January to December for the year prior to going green
//enter the energy bills from January to December of the past year after going green
//calculate the energy difference from the two years and display the two years worth of data, along with the savings.  
//use arrays, first year cost, secound year cost, differance
// then output the info to savings.txt
#include<stdio.h>
#include <stdlib.h>
#include "../chapter_3/class_work.h"
void main()
{
	int i;
	double iyear[13],igreen[13], idiff[13];
	char *cyear[13],*cgreen[13];
	for ( i = 1; i <13; i++ )
	{
		printf("Please enter in the cost for the month %d\n", i);
		cyear[i] = readLine();
		iyear[i] = strtod(cyear[i], NULL);
		printf("Please enter in the cost for the month %d (after going green)\n", i);
		cgreen[i] = readLine();
		igreen[i] = strtod(cgreen[i], NULL);
		idiff[i] = iyear[i] -  igreen[i];
	}
	FILE *fpIn;
  	fpIn = fopen("savings.txt", "a");
	for ( i = 1; i <13; i++ )         
	{
		printf("You spend %f during month %d and then %f when going green, saving you %f\n",  iyear[i], i,  igreen[i],  idiff[i]);
      		fprintf(fpIn,"You spend %f during month %d and then %f when going green, saving you %f\n",  iyear[i], i,  igreen[i],  idiff[i]);  
	}
	fclose(fpIn);
}
