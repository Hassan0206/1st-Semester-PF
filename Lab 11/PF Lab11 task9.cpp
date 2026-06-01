#include<stdio.h>

int countFunction(int n,int count){
	if(count==n){
		return count;
	}
	countFunction(n,count+1);
}

int main()
{
	int n=21, count=0;
	printf("Function repeats itself %d times\n",countFunction(n,count));
	return 0;
}