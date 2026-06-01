#include<stdio.h>
int main()
{
	int temp, median;
	int scores[10]={34,98,76,45,91,81,24,39,77,58};
	for(int i=0;i<11;i++){
		if(scores[i]>scores[i+1]){
			temp=scores[i];
			scores[i]=scores[i+1];
			scores[i+1]=temp;
		}
			printf("The ascended set is:%d \n",scores[10]);
	}
	median=(scores[4]+scores[5])/2;
	printf("The median score is %d\n",median);
	return 0;
	
}