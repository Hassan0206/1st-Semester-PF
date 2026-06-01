#include<stdio.h>
#include<ctype.h>
int main()
{
	char text[50];
	printf("Enter a string: ");
	scanf("%s",&text);
	
	printf("\nThe string is:");
	for(int i=0;i<50;i++){
		printf("%s",text[i]);
	}
}