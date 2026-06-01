#include<stdio.h>
int main()
{
	int num1, num2, sum, difference, product;
	float remainder, quotient;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1, &num2);
	
	sum=num1+num2;
	difference=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	remainder=num1%num2;
	
	printf("sum is %d\n",sum);
	printf("difference is %d\n",difference);
	printf("product is %d\n",product);
	printf("quotient is %.2f\n",quotient);
	printf("remainder is %.2f\n",remainder);
	
	return 0;
}