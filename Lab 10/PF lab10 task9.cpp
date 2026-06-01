#include<stdio.h>
#include<string.h>

int main()
{
	char names[3][10];
	
	printf("Enter three names:\n");
    for(int i=0;i<3;i++){
    	fgets(names[i],10,stdin);
	}

    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%c ",names[i][j]);
        }
        printf("\n");
    }
    return 0;
 
}