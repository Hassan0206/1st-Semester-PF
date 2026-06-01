#include<stdio.h>
#include<string.h>

int main()
{
	char user1[20];
	char user2[10];
	
	printf("Enter the first username: ");
	fgets(user1,20,stdin);
	 user1[strcspn(user1, "\n")] = 0;
	printf("Enter the second username: ");
	fgets(user2,10,stdin);
	user2[strcspn(user2, "\n")] = 0;
	
	strcat(user1,user2);
	
	printf("The merged username is: %s",user1);
	
	return 0;
}