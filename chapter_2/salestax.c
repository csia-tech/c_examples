#include <stdio.h>
#include <math.h>
#include <stdlib.h>
char * readLine(void);
double  round_num(double value, int places);
int main() 
{
	char * sSales, *sState, *sCounty;  	
	int *bTest = 0;// validation check var
	printf("The following must be entered as numbers.\n");
        printf("Please enter the total amount of sales for the month: \n");
        sSales = readLine(); // get input
	printf("Enter the amount of state tax: \n");
        sState = readLine();
	printf("Enter the amount of county tax: \n");
      	sCounty = readLine();
	double dSales = atof(sSales), dState = atof(sState), dCounty = atof(sCounty);
//	double dSales=1, dState=2, dCounty=3;
	dState = dSales * (dState * .01 ); 
	dState = round(dSales); // rounding figures to money decimal level of precisions
	dCounty = dSales * (dCounty * .01 );
	dCounty = round(dCounty);
	dSales = dSales + dState + dCounty; 
	dSales = round(dSales);
	printf("*****************\n*Tax information*\n*****************\n"); // producing output for user
        printf("The state sales tax you paid for the amount entered is: %f\n", dState);
        printf("The county sales tax you paid for the amount entered us: %f\n", dCounty);
        printf("Your total tax paid it: %f\n", dSales);
 }
char * readLine(void) // returns a char & takes no arguments
{
    char * line = malloc(100), * linep = line;// allocates 100 characters to line at first element & assigns a pointer of lines first element to lineps first element
    size_t lenmax = 100, len = lenmax;// define a size variable to 100 & make len a pointer to lenmax
    int c;// declare an integer 
    if(line == NULL)//memory allocation error
        return NULL;

    for(;;) 
    {
        c = fgetc(stdin);//get first character of input
        if(c == EOF)//if it is end of field, aka enter 
            break;// exit loop
        if(--len == 0)//check to see if we are at the end of our allocated amount of memory 
	{   
		len = lenmax;//reset len
            	char * linen = realloc(linep, lenmax *= 2);// declare character variable linen and reallocate memory starting at address of linep (2x lenmax)
            	if(linen == NULL) // memory allocation error
		{
                	free(linep);// free original allocated memory
                	return NULL;
            	}
            	line = linen + (line - linep);//make line point at linen (cycling through memory of linen
            	linep = linen;// make linep point to linen ???
        }
        if((*line++ = c) == '\n')// check for end of line
            break;
    }
    *line = '\0';// place null char at end of text
    return linep;// return point to retrieved line
}
