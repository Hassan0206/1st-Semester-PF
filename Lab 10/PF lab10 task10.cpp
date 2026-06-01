#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char names[5][20];
	char search[20];
	char readNames[5][20];
	FILE *fptr;
	
	printf("Enter five names:\n");
	for(int i=0;i<5;i++){
		fgets(names[i],20,stdin);
		names[i][strcspn(names[i], "\n")] = 0;
	}
	
	fptr=fopen("names.txt","w");
	
	for(int i=0;i<5;i++){
		fprintf(fptr,"%s\n",names[i]);
	}
	
	fclose(fptr);
	
	fptr=fopen("names.txt","r");
	if(fptr == NULL){
       printf("Error opening file for reading\n");
       exit(1);
    }    
	
	printf("Enter a name to search: ");
	fgets(search,20,stdin);
	search[strcspn(search, "\n")] = 0;
	
	for(int i=0;i<5;i++){
		fscanf(fptr,"%19s",readNames[i]);
	}
	
	int found=0;
	for(int i=0;i<5;i++){
		if(strcmp(search,readNames[i])==0){
			printf("\nName found in directory\n");
			found=1;
			break;
		}
	}
	
	if(!found){
		printf("Name not found\n");
	}
	
	fclose(fptr);
	
	return 0;
}