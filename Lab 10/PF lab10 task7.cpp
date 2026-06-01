#include<stdio.h>
#include<string.h>

int main()
{
	char password[20];
	char pass_cnfm[20];
	
	printf("Create new password: ");
	fgets(password,20,stdin);
	printf("Re-enter the password: ");
	fgets(pass_cnfm,20,stdin);
	
	if(strcmp(password,pass_cnfm)==0){
		printf("Password Match!\n");
	}
	else{
		printf("Password do not match!\n");
	}
	
	return 0;
}