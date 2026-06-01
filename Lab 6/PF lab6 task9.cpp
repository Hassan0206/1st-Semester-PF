#include<stdio.h>
int main()
{
	int num;
	int largest, smallest;
	char decision;
	
	do{
		printf("Enter a number: ");
		scanf(" %d",&num);
		 if(num>largest){
		 	largest=num;
		 	printf("The largest number is: %d\n",largest);
		 }
		 else if(num<smallest){
		 	smallest=num;
		 	printf("The smallest number entered is: %d\n",smallest);
		 }
		 printf("\nDo you want to continue(yes/no)?: \n");
		 scanf(" %c",&decision);
		 
	}while(decision!='n');
	
	printf("The largest number entered is: %d\n",largest);
	printf("The smallest number entered is: %d\n",smallest);
}