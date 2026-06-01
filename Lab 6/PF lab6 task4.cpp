#include<stdio.h>
int main()
{
	char ch,dec;
	int v=0,c=0;
	printf("Enter a single character\n");
	do{
		scanf(" %c",&ch);

		
		if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
			printf("%c is vowel\n",ch);
			v+=1;
		}
		else{
			printf("%c is consonent\n",ch);
			c+=1;
		}
	    
		printf("Do you want to continue? (y for yes / n for no)\n");
		scanf(" %c",&dec);
		
	}while(dec == 'y');
	printf("total number of vowels: %d\n",v);
	printf("Total number of consonants: %d\n",c);
	return 0;
}