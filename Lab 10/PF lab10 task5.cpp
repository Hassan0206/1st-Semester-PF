#include<stdio.h>
#include<string.h>

int main()
{
	char original[25];
	char backup[25];
	
	printf("Enter a short message\n");
	fgets(original,25,stdin);
	
	strcpy(backup,original);
	
	printf("\nOriginal message: %s\n",original);
	printf("Backup message: %s\n",backup);
	
	return 0;
}