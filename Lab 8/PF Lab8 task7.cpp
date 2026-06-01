#include<stdio.h>
int main()
{
	int mat1[2][2], mat2[2][2];
	int product[2][2];
	
	printf("Enter values for first matrice:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	    	printf("Element %d%d: ",i,j);
	    	scanf("%d",&mat1[i][j]);	
		}
	}
	
	printf("The first matice is:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	    	printf("%d ",mat1[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nEnter values for second matrice:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	    	printf("Element %d%d: ",i,j);
	    	scanf("%d",&mat2[i][j]);	
		}
	}
	
	printf("The second matrice is:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	    	printf("%d ",mat2[i][j]);	
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            product[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
	
	printf("The product matrice is:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}