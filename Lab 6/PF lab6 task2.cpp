#include <stdio.h>
int main() 
{
    int num, i, j;
    int count = 0;
    int sum = 0;
    
    printf("Entee a number: ");
    scanf("%d",&num);
    
    printf("Prime numbers: ");
    
    for(i = 2; i <= num; i++) {
        
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                break; 
            }
        }
        
        if(j == i) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    
    printf("\nCount: %d\n", count);
    printf("\nSum: %d\n", sum);
    
    return 0;
}
