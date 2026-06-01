#include <stdio.h>
int main()
{
    int r, coef = 1;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    
    for(int i=0;i<r;i++) {
        for(int j=1;j<=r-i;j++){
            printf(" ");
        }
        
        for(int k=0;k<=i;k++) {
            if(k==0 || i==0) {
                coef=1;
            } else {
                coef=coef*(i-k+1)/k;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
    
    return 0;
}