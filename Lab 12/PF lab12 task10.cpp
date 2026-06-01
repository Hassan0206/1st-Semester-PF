#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    
    int *new_ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    free(ptr);
    
    ptr[0] = 100;
    printf("Value at old pointer: %d\n", ptr[0]);
    
    free(new_ptr);
    return 0;
}