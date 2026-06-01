#include<stdio.h>
int main()
{
	int course;
	char grade;
	printf("Enter your course number(1-3)\n");
	scanf("%d",&course);
	printf("enter grade for course from A,B,C,D,F\n");
	scanf(" %c",&grade);
	
	switch(course)
	{
		case 1:
			switch (grade)
			{
				case 'A':
					printf("Excellent!\n");
					break;
					
				case 'B':
					printf("Good!\n");
					break;
					
				case 'C':
					printf("satisfactory\n");
					break;
					
				case 'D':
					printf("Very bad\n");
					break;
					
				case 'F':
					printf("Failed\n");
					break;
					
				default:
					printf("Enter valid grade\n");
							
			}
			break;
		case 2:
			switch (grade)
			{
				case 'A':
					printf("Excellent!\n");
					break;
					
				case 'B':
					printf("Good!\n");
					break;
					
				case 'C':
					printf("satisfactory\n");
					break;
					
				case 'D':
					printf("Very bad\n");
					break;
					
				case 'F':
					printf("Failed\n");
					break;
					
				default:
					printf("Enter valid grade\n");
							
			}
			break;
		case 3:
			switch (grade)
			{
				case 'A':
					printf("Excellent!\n");
					break;
					
				case 'B':
					printf("Good!\n");
					break;
					
				case 'C':
					printf("satisfactory\n");
					break;
					
				case 'D':
					printf("Very bad\n");
					break;
					
				case 'F':
					printf("Failed\n");
					break;
					
				default:
					printf("Enter valid grade\n");
						
			}
			break;
		default:	
			printf("Enter valid course number\n");
			
	}
	return 0;
}