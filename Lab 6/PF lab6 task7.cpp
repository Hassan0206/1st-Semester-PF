#include<stdio.h>
int main()
{
	int balance=5000;
	double newbalance=5000;
	int deposit, withdrawal, amount;
	int w=0;
	int d=0;
	float final_bal;
	do{
		printf("Enter the amount you want to deposit/withdrawal(positive=deposit, negative=withdrawal): ");
		scanf(" %d",&amount);
		if(amount>0){
			deposit=amount;
			newbalance=newbalance+deposit;
			d+=1;
		}
		else if(amount<0){
			withdrawal=amount;
			newbalance=newbalance+withdrawal;
			w+=1;
		}
		
		printf("\nYour updated balance is:$ %.2lf\n",newbalance);
		
	}while(amount!=0);
	
		printf("THe number of deposits are: %d\n",d);
		printf("The number of withdrawals are: %d\n",w);
		final_bal=newbalance;
		printf("\nYour final balance is: %.2lf\n",final_bal);
		
		return 0;
}