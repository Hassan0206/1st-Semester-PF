#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1, &num2);
	
	printf("num1 equals to num2: %d\n",num1==num2);
	printf("num1 greater than num2: %d\n",num1>num2);
	printf("num1 less than num2: %d\n",num1<num2);
	printf("num1 not equals to num2: %d\n",num1!=num2);
	printf("num1 greater than equals to num2: %d\n",num1>=num2);
	printf("num1 less than equals to num2: %d\n",num1<=num2);
	
	return 0;
}