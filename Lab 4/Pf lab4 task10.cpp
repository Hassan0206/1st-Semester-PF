#include<stdio.h>
int main ()
{
	int Password=1234;
	int PIN;
	printf ("Enter your pin\n");
	scanf ("%d",&PIN);
	
	if (PIN==Password)
	{
		printf ("Access granted\n");
	}
	else
	{
		printf ("Access denied\n");
	}
	return 0;
}