#include<stdio.h>
int main()
{
	int studentscore;
	printf ("Enter your score\n");
	scanf ("%d",&studentscore);
	
	if (studentscore>=90)
	{
		printf ("A grade\n");
	}
	else if (studentscore>=80 && studentscore<=89)
	{
		printf ("B grade\n");
	}
	else if (studentscore>=70 && studentscore<=79)
	{
		printf ("C garde\n");
	}
	else if (studentscore>=60 && studentscore<=69)
	{
		printf ("D grade\n");
	}
	else 
	{
		printf ("F grade\n");
	}
	return 0;
}