#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value for element %d%d: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("\nOriginal Matrice\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
    
    int temp;
    for(int i=0;i<3;i++){
        int temp=arr2[i][0];
        arr2[i][0]=arr2[i][2];
        arr2[i][2]=temp;
    }
    
    printf("Rotated Matrice\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}