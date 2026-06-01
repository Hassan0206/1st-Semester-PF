#include<stdio.h>

int main()
{
	int *p=NULL;
	
	if(p==NULL){
		printf("The pointer doesn't reference any valid memory\n");
	}
	else{
		printf("Pointer refers to a valid memory\n");
	}
	
	return 0;
}