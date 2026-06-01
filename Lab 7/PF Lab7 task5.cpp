#include<stdio.h>
int main()
{
	int grade[10];
	float avg_grade;
	int h_grade, l_grade;
	int h_index, l_index;
	int sum=0;
	
	printf("Enter grades for each student\n");
	for(int i=0;i<10;i++){
		scanf("%d",&grade[i]);
	}
	
	printf("The grades of students are:\n");
	for(int j=0;j<10;j++){
		printf("Roll no %d: %d\n",j,grade[j]);
		sum+=grade[j];
	}
	
	h_grade=grade[0];
	l_grade=grade[0];
	for(int i=0;i<10;i++){
    	if(grade[i]>h_grade){
	    	h_grade=grade[i];
	    	h_index=i;
		}
		
		if(grade[i]<l_grade){
	    	l_grade=grade[i];
	    	l_index=i;
    	}
		
	}
	
	avg_grade=sum/10;
	printf("The average grade for the class is %.2f\n",avg_grade);
	printf("The highest grade in the class is %d of roll number %d\n",h_grade,h_index);
	printf("The lowest grade in the class is %d of roll number %d\n",l_grade, l_index);
	
	printf("\nModify the score for the index with lowest score\n");
	for(int k=0;k<10;k++){
		if(k==l_index){
			printf("Enter the new score:");
			scanf("%d",&grade[k]);
		}
	}
	
	printf("\nThe updated grades of students are:\n");
	for(int j=0;j<10;j++){
		printf("Roll no %d: %d\n",j,grade[j]);
	}
	
	return 0;
}