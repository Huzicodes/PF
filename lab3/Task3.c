#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    // Tip: The leading space in " %c" consumes any leftover newline character from the previous input in the input buffer
    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height); // Displays height with exactly 2 decimal places
    printf("Grade: %c\n", grade);

    return 0;
}
