#include<stdio.h>

int power(int num,int p){
	if(p==0){
		return 1;
	}
    int ans=num*power(num,p-1);
    return ans;
}

int main()
{
	int num,p;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("\nEnter power(1-3):");
	scanf("%d",&p);
	printf("Answer=%d",power(num,p));
	return 0;
}