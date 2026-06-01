#include<stdio.h>
int main()
{
	int size, element;
	printf("How many elements do you want to store in the array?\n");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the values to store in the array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("The values in the array are:");
	for(int j=0;j<size;j++){
		printf(" %d",arr[j]);
	}
	
	printf("\nEnter the element you want to modify:");
	scanf(" %d",&element);
	
	for(int k=0;k<size;k++){
		if(k==element){
			printf("\nEnter the value you want to replace for element %d\n",element);
			scanf("%d",&arr[k]);
			break;
		}
	}
	
		printf("The updated array is:");
		for(int x=0;x<size;x++){
			printf(" %d",arr[x]);
		}
		
		return 0;
}