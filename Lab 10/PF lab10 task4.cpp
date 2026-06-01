#include<stdio.h>
#include<stdlib.h>

int main()
{
	int id1, id2, id3;
	FILE *fptr;
	
	fptr=fopen("library.txt","w");
	
	if(fptr==NULL){
    	printf("Error\n");
		exit(1);
	}
	
	printf("Enter three ids\n");
	scanf("%d%d%d",&id1,&id2,&id3);
	
	fprintf(fptr,"%d %d %d",id1,id2,id3);
	fclose(fptr);
	
	fptr=fopen("library.txt","r");
	
	fscanf(fptr,"%d%d%d",&id1,&id2,&id3);
	printf("id 1: %d\nid 2: %d\nid 3: %d",id1,id2,id3);
	
	fclose(fptr);
	
	return 0;
	
}