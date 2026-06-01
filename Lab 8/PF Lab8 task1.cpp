#include<stdio.h>
int main()
{
int arr1[3][3];
int arr2[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("ENter the value for element %d%d:",i,j);
scanf("%d",&arr1[i][j]);
}
}

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

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d ",arr2[i][j]);

}
printf("\n");
}

int symmetric=0;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(arr1[i][j]==arr2[i][j]){
symmetric=1;
}
else{
symmetric=0;
break;

}
}
}

if(symmetric==1){
printf("Matrices are symmetric\n");
}
else{
printf("Matrices are not symmetric\n");
}
}