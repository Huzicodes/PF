#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal (%.2f).\n", num1);
    } 
    else if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2) {
            printf("The greatest numbers are num1 and num2 (%.2f).\n", num1);
        } else if (num1 == num3) {
            printf("The greatest numbers are num1 and num3 (%.2f).\n", num1);
        } else {
            printf("The greatest number is num1: %.2f\n", num1);
        }
    } 
    else if (num2 >= num1 && num2 >= num3) {
        if (num2 == num3) {
            printf("The greatest numbers are num2 and num3 (%.2f).\n", num2);
        } else {
            printf("The greatest number is num2: %.2f\n", num2);
        }
    } 
    else {
        printf("The greatest number is num3: %.2f\n", num3);
    }

    return 0;
}
