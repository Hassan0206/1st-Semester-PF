#include<stdio.h>
#include<string.h>
void reverseCode(char s[], int len){
	if(len==0){
		return;
	}
    printf("%c",s[len-1]);
    reverseCode(s,len-1);
    return;
}

int main()
{
	char s[20];
	printf("Enter code word:");
	gets(s);
	int len=strlen(s);
	reverseCode(s,len);
	return 0;
}