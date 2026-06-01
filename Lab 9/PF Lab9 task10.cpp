#include<stdio.h>

float average(int a, int b, int c){
	float avg=(a+b+c)/3;
	return avg; 
}

int main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("The average of these three values is %.2f",average(a,b,c));
	
	return 0;
}