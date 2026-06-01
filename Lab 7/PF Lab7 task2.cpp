#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int e=0,o=0;
    for(int i=0;i<10;i++){
        if(a>=0){
           if(a[i]%2==0){
           printf("Even number:%d\n",a[i]);
           e+=a[i];
           }
           else{
           printf("odd number:%d\n",a[i]);
           o+=a[i];
           }
        }
        else{
           printf("Invalid number\n");
        }

    }

    printf("Sum of even numbers is %d\n",e);
    printf("Sum of odd numbers is %d\n",o);
}