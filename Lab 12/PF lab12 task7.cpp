#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr =(int*)malloc(5 * sizeof(int));
    printf("Initial allocation successful\n");
    
    ptr = NULL;
    printf("After NULL: %p\n", (void*)ptr);
    
    free(ptr);
    return 0;
}