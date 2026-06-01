#include<stdio.h>
int main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int sum1=0,sum2=0;
int total=0;

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(i==j){

sum1+=arr[i][j];
}

if(i+j==3-1){
sum2+=arr[i][j];
}

}
}
total=sum1=sum2;
printf("The total sum is %d\n",total);
return 0;
}