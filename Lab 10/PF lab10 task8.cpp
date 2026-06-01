#include<stdio.h>
#include<string.h>

int main()
{
	char arr[3][20];
	printf("Enter names of three students\n");
	for(int i=0;i<3;i++){
		fgets(arr[i],20,stdin);
	}
	
	printf("The names of three studemts are:\n");
	for(int i=0;i<3;i++){
		fputs(arr[i],stdout);
		printf("\n");
	}
	
	return 0;
}