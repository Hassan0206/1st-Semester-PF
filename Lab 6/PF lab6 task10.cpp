#include<stdio.h>
int main()
{
	int num, total=0;
	char decision;
	while(decision='y'){
		printf("Enter a number: ");
		scanf("%d",&num);
		total+=num;
		printf("The running total is: %d\n",total);
		
		printf("Do you want to continue(y/n)?: ");
		scanf("%c",decision);
	}
	
	printf("\nThe total is: %d",total);
	return 0;
}