#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a=25, b=40;
	printf("Before swap:\n");
	printf("a:%d , b:%d",a,b);
	
	swap(&a,&b);
	printf("\nAfter swap:\n");
	printf("a:%d , b:%d",a,b);
	
	return 0;
}