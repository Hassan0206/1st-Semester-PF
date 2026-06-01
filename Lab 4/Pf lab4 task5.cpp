#include<stdio.h>
int main()
{
	int color;
	printf ("Enter a color from 1-3 (1=red, 2=yellow, 3=go)\n");
	scanf ("%d",&color);
	
	switch (color)
	{
		case 1:
			printf("Stop\n");
			break;
		
		case 2:
			printf ("Ready\n");
			break;
			
		case 3:
			printf ("Go\n");
			break;
			
		default:
			printf ("Invalid Input\n");
	}
	return 0;
}