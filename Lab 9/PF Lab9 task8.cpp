#include<stdio.h>
int main()
{
	int a=10;
	char letter='b';
	float c=12.09;
	void *p;
	
	p=&a;
	printf("value of pointer is %d\n",*(int*)p);
	p=&letter;
	printf("Character of pointer is %c\n",*(char*)p);
	p=&c;
	printf("value of pointer is %.2f\n",*(float*)p);
	
	return 0;
}