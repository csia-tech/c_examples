#include <stdio.h>
main() 
{
	int i;
	printf("   X\n"); //print first line
	for (i=0; i<2; i++)
	{
		if(i<=0)
		{
			printf("  XXX\n");
		}
		if(i<1)
		{
			printf(" XXXXX\n");
		}
		else
		{
			printf("XXXXXXX\n");
			
		}
	}
	printf("   X\n"); //print last line
}
