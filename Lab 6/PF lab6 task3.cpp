#include <stdio.h>

int main()
 {
    int num;
    long first = 0, second = 1, next;
    long sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    if(num <= 0) {
        printf("Please enter a positive number.\n");
        
    }
    
    printf("Fibonacci sequence: \n");
    
    for(int i = 1; i <= num; i++) {
        printf("%ld \n", first);
        sum = sum + first;
        
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\nSum of Fibonacci sequence: %lld\n", sum);
    
    return 0;
}