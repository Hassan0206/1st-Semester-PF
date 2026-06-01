#include<stdio.h>
int main ()
{
	int num1, num2, Answer;
	char optr;
	printf ("Enter any two numbers\n");
	scanf ("%d%d",&num1, &num2);
	
	printf ("Enter an operator from +,-,*,/ \n");
	scanf (" %c",&optr);
	
	switch (optr)
	{
		case '-':
			Answer=num1-num2;
			printf ("Answer=%d",Answer);
			break;
		
		case '+':
			Answer=num1+num2;
			printf ("Answer=%d",Answer);
			break;
		
		case '*':
			Answer=num1*num2;
			printf ("Answer=%d",Answer);
			break;
		case '/':
			Answer=num1/num2;
			printf ("Answer=%d",Answer);
			break;
			
		default:
			printf ("Invalid operator\n");
	}
	return 0;
	
	
}