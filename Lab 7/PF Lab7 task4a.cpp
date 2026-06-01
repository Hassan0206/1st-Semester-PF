#include<stdio.h>
int main()
{
	int temp, median;
	int scores[10]={34,98,76,45,91,81,24,39,77,58};
	printf("The original scores are: ");
	for(int i=0;i<10;i++){
		printf(" %d",scores[i]);
	}
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i-1;j++){
	    	if(scores[j]>scores[j+1]){
		    	temp=scores[j];
		     	scores[j]=scores[j+1];
		    	scores[j+1]=temp;
	    	}
		}
	
	}
   	printf("\nThe ascended set is: ");
   	for(int i=0;i<10;i++){
			printf(" %d",scores[i]);
   }
   
	median=(scores[4]+scores[5])/2;
	printf("\nThe median score is %d\n",median);
	return 0;
	
}