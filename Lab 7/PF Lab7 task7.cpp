#include<stdio.h>
int main()
{
	int product_id[10];
	int target;
	
	printf("Enter the product ids(3 digit) for the products:\n");
	for(int i=0;i<10;i++){
		scanf(" %d",&product_id[i]);
	}
	printf("The product ids are: ");
	for(int i=0;i<10;i++){
		printf(" %d",product_id[i]);
	}
	
	printf("\nEnter the pproduct id you want to remove from the inventory: ");
	scanf("%d",&target);
	
	for(int j=0;j<10;j++){
		if(product_id[j]==target){
			printf("\nproduct id found\n");
			product_id[j]=0;
    	}

	}
		
	printf("The remaining product ids are: ");
	for(int i=0;i<10;i++){
		if(product_id[i]!=0){
		printf(" %d",product_id[i]);
		}
	}
	
	return 0;

}