#include<stdio.h>
#include<string.h>

int main()
{
	char word[10];
	char ch;
	char *result;
	
	printf("Enter a word: ");
	fgets(word,10,stdin);
	printf("\nEnter any character you want to find in the word: ");
	scanf("%c",&ch);
	
	result=strchr(word,ch);
	if(result !=NULL){
		printf("Character %c found at index %d\n",ch,result-word);
	}
	
	return 0;
}