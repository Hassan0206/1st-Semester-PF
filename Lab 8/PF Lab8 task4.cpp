#include<stdio.h>
int main()
{
	int arr[3][3];
	printf("Enter the values for the array:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Element %d%d: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("The matrice is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	if(arr[0][1]==0 && arr[0][2]==0 && arr[1][2]==0){
		printf("The matrice is lower triangular\n");
	}
	else if(arr[1][0]==0 && arr[2][0]==0 && arr[2][1]==0){
		printf("The matrice is upper triangular\n");
	}
	else{
		printf("Neither\n");
	}
	
	return 0;
	
}