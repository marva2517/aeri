#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Cannot divide by zero\n");
    } else {
        printf("Result = %.2f\n", a / b);
    }

    return 0;
}

