#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2;
    float (*operation)(float, float);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    printf("Choose operation (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: operation = add; break;
        case 2: operation = subtract; break;
        case 3: operation = multiply; break;
        case 4: operation = divide; break;
        default: 
            printf("Invalid choice! Using addition.\n");
            operation = add;
    }
    
    float result = operation(num1, num2);
    printf("Result: %.2f\n", result);
    
    return 0;
}