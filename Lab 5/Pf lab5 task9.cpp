#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1, &num2);
	
	printf("num1&num2 : %d\n",num1&num2);
	printf("num1 | num2 : %d\n",num1|num2);
	printf("num1^number : %d\n",num1^num2);
	printf("~num1 : %d\n",~num1);
	printf("num1<<1 : %d\n",num1<<1);
	printf("num1>>1 : %d\n",num1>>1);
	
	return 0;
}