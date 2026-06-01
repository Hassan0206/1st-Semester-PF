#include<stdio.h>
#include<ctype.h>
int main()
{
	char string[50];
	int vowelcheck = 0;
	printf("enter  a text: \n");
	scanf("%s" , &string);
	for (int i = 0 ; i < 50 ; i++){
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
			string[i] = toupper(string[i]);
		}
	}
	printf("The updated string is: %s" , string);
}
