#include <stdlib.h>
#include <stdio.h>
#include "../chapter_3/class_work.h"
void main()
{
	int i,z=0,iInfo,x,y;
	char *cInfo;
	double questions=10, average, correct;
	for ( i = 0; i < 10; i++)
	{
		x = rand() % 100;
		y = rand() % 100;
		printf("Math question: %d + %d = ?\n",x,y);
		cInfo = readLine();
		sscanf(cInfo, "%d", &iInfo);
		//parse input
		z = x + y;
		if ( z == iInfo ) correct++;
	}
	average = correct / questions *100;
	printf("%f/10 %f percent \n", correct, average);
}
