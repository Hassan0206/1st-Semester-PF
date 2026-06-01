#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr =(int*)malloc(10 * sizeof(int));
    
    for(int i = 0; i < 10; i++) {
        arr[i] = i * 10;
    }
    
    arr[0] = 100;
    
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}