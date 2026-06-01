#include<stdio.h>
int main()
{
	int num[5];
	int result[5];
	printf("Enter 5 numbers in the array\n");
	for(int i=0;i<5;i++){
		scanf(" %d",&num[i]);
	}
	
	for(int j=0;j<5;j++){
		result[j]=(num[j]+10-5)*2;
	}
	
	printf("Original numbers     Result \n ");
	for(int i=0;i<5;i++){
		printf("\t%d\t\t%d\n",num[i], result[i]);
	}
	
	return 0;
}