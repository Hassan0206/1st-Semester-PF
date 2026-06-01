#include<stdio.h>
int main()
{
	int arr1[5];
	int arr2[5];
	int arr3[10];
	
	printf("Enter the values to store in arr1\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the values to store in arr2\n");
	for(int j=0;j<5;j++){
		scanf("%d",&arr2[j]);
	}
	
	printf("Values of arr1 are: ");
	for(int i=0;i<5;i++){
		printf(" %d",arr1[i]);
	}
	
	printf("\nValues of arr2 are: ");
	for(int j=0;j<5;j++){
		printf(" %d",arr2[j]);
	}
	
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i];
	}
	
	for(int j=0;j<5;j++){
		arr3[j+5]=arr2[j];
	}
	printf("\nThe values of arr3 are: ");
	for(int i=0;i<10;i++){
		printf(" %d",arr3[i]);
	}
	
	return 0;
}