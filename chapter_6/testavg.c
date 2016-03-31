#include <stdlib.h>
#include <stdio.h>
#include "../chapter_3/class_work.h"
void main() 
{
	char sGo;
	int i=0,iStudents;
	double dGrades, dAvg=0.0;
       	printf("We will now computer the average for a test.\n");
	while (1)
	{
		double dStudents = 0.0;
		char *cStudents, *sGo;
		printf("How many students?\n");
		cStudents = readLine();
		dStudents =  strtod(cStudents,NULL);
		double i=0, dGrades=0.0,dAvg = 0.0;
		while (i < dStudents )
		{
			printf("Enter student grade.\n");
			cStudents = readLine();
			dGrades =  strtod(cStudents,NULL);
			dAvg = dAvg + dGrades;
			i++;
		}
		dAvg = dAvg / dStudents;
		printf("The average is %f\n", dAvg );
		printf("Compute average of another test?\n");
		sGo = readLine();
		if ( *sGo == 'n') break;
		else i=0;
	}
}

