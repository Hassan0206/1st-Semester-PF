#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n);
    
    for(int i = 0; i < n; i++) {
        arr[i] = i * 5;
    }
    
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);
    return 0;
}