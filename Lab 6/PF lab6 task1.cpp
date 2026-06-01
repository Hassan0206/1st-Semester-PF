#include<stdio.h>
int main()
{
	int num,even=0,odd=0;
	char ch;
	printf("Enter a number\n");

	do{

		for(int i=1;i<=num;i++){
		scanf("%d",&num);
		if(num%2==0){
			printf("Number is even\n");
			even+=1;
		}
		else{
			printf("Number is odd\n");
			odd+=1;
		}
	    }
		printf("Do you want to continue?\n");
		scanf(" %c", &ch);
	
	}while(ch=='y');
	printf("there are %d even numbers\n",even);
	printf("there are %d odd numbers\n",odd);
	
	return 0;

}