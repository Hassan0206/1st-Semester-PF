#include<stdio.h>
int main()
{
	int grade, sum=0, count=0;
	int a=0, b=0, c=0;
	float avg;
	printf("Enter your grade(0-100): ");
	do{
		scanf("%d",&grade);
		if(grade!=-1){
		printf("Your grade is %d\n",grade);
    	}
		if(grade>70){
			a+=1;
		}
		else if(grade>50 && grade<70){
			b+=1;
		}
		else if(grade<50){
			c+=1;
		}
		
		sum+=grade;
		count+=1;   
	}while(grade!=-1);
		
	avg=sum/count;
	printf("Your average grade is:%.2f\n",avg);
	printf("Number of grades above 70 are:%d\n",a);
	printf("Number of grades between 50 and 70 are:%d\n",b);
	printf("Number of grades below 50 are:%d\n",c);
	
	return 0;
}