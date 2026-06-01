#include<stdio.h>
#include<string.h>

int main()
{
	char prdct1[10];
	char prdct2[10];
	
	printf("Enter the product id for first product: ");
	scanf("%s",prdct1);
	printf("Enter the product id for second product: ");
	scanf("%s",prdct2);
	
	int result=strncmp(prdct1,prdct2,3);
	if(result==0){
		printf("The products are from the same category\n");
	}
	else{
		printf("The products are from different categories\n");
	}
	
	return 0;
	
}