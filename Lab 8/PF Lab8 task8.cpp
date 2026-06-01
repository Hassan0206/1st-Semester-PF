#include<stdio.h>
int main()
{
	int arr[3][3];
	int e=0,o=0,p=0,n=0,zero=0;
	
	printf("Enter the values for the matrice:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Element %d%d: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nThe matrice is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]%2==0){
				e+=1;
			}
			else{
				o+=1;
			}
			
			if(arr[i][j]>0){
				p+=1;
			}
			else if(arr[i][j]<0){
				n+=1;
			}
			else{
				zero+=1;
			}
		}
	}
	
	printf("\nNumber of even values:%d\n",e);
	printf("Number of odd values:%d\n",o);
	printf("Number of positive values:%d\n",p);
	printf("Number of negative values:%d\n",n);
	printf("Number of values equals to zero:%d\n",zero);
	
	return 0;
}