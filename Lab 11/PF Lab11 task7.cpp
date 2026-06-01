#include<stdio.h>

struct university{
	char department[10];
	int block;
	char name[20];
	int id;
	float cgpa;
};

int main()
{
	struct university student;
	printf("Department:");
	scanf("%s",student.department);
	printf("\nBlock:");
	scanf("%d",&student.block);
	getchar();
	printf("\nName:");
    fgets(student.name,20,stdin);
	printf("\nID:");
	scanf("%d",&student.id);
	printf("\nCGPA:");
	scanf("%f",&student.cgpa);
	printf("\n");
	printf("Department:%s\n",student.department);
	printf("Block:%d\n",student.block);
	printf("Name:%s\n",student.name);
	printf("ID:%d\n",student.id);
	printf("CGPA:%.2f\n",student.cgpa);
	
	return 0;
}