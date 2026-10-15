#include <stdio.h>
int main() {
    int num1, num2;
    float add, sub, mul, div;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);

    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("===RESULT===\n");
    printf("Addition: %.2f\n", add);
    printf("Subtraction: %.2f\n", sub);
    printf("Multiplication: %.2f\n", mul);
    printf("Division: %.2f\n", div);

    return 0;
}
