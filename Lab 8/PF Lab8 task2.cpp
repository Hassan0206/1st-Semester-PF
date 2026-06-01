#include<stdio.h>
int main()
{
int r;
printf("How many rows:");
scanf("%d",&r);

for(int i=0;i<=r;i++){

for(int j=0;j<2*(r-i)-1;j++){
printf(" ");

}
for(int k=0;k<i;k++){
printf("%d ",k+1);
}
printf("\n");
}

}