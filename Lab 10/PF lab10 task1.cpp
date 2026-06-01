#include<stdio.h>
#include<string.h>

int main()
{
	char word[20];
	char code[]="Falcon";
	printf("Enter the code word: ");
	fgets(word,20,stdin);
	
	int len1=strlen(word);
	printf("\nThe length of code word is: %d\n",len1);
	strcat(word,code);
	int len2=strlen(word);
	printf("The code word is: %s\n",word);
	printf("The new length of code word is: %d\n",len2);
	return 0;
}