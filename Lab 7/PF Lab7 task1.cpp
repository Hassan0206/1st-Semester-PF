#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    printf("The original array is:");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    printf("\nThe reversed array is:");
    for(int j=10;j>0;j--){
        arr[j]=arr[j-1];
        printf("%d ",arr[j]);
        sum+=arr[j];
    }
    printf("\nsum is %d",sum);
}