#include<stdio.h>
int main()
{
	int num;
	double fact=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num<0){
		printf("Invalid number! Please enter a positve number\n");
	}
	else{
	    for(int i=num ; i>=1 ; i--){
		fact *= i;
    	}
    }
	printf("The factorial for the given number is: %.0lf\n",fact);
	return 0;
}
