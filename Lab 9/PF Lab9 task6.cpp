#include<stdio.h>

void calculate(int a, int b, int *sum, float *avg){
	*sum=a+b;
	*avg=(a+b)/2;
}

int main()
{
	int a=20, b=30;
	int sum=0;
	float avg;
	
	calculate(a,b,&sum,&avg);
	printf("The sum is %d\n",sum);
	printf("The average is %.2f",avg);
	
	return 0;
}