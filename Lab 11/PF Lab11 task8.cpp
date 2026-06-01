#include<stdio.h>

struct employees{
	int id;
	char name[20];
	int salary;
	char position[10];
};

int main()
{
	struct employees emp[5];
	for(int i=0;i<5;i++){
		printf("Employee %d\n",i+1);
		printf("Id:");
		scanf("%d",&emp[i].id);
		getchar();
		printf("\nName:");
		fgets(emp[i].name,20,stdin);
		printf("\nSalary:");
		scanf("%d",&emp[i].salary);
		getchar();
		printf("\nPosition:");
		fgets(emp[i].position,10,stdin);
		printf("\n");
		
	}
	
	for(int i=0;i<5;i++){
		if(emp[i].salary>emp[i+1].salary){
			printf("Employee %s id %d of position %s has highest salary of %d",emp[i].name,emp[i].id,emp[i].position,emp[i].salary);
		}
	}
	return 0;
}