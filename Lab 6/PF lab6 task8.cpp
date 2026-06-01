#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number you want the table for: ");
	scanf("%d",&num);
	
	for(int i=1;i<=10;i++){
		printf("%d*%d=%d\n",num,i,num*i);
	}
	
	return 0;
}