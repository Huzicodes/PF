#include <stdio.h>

int main() {
    char studentName[100];
    int age;
    float height;
    char grade;
    float cgpa;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    printf("\nEnter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter grade: ");
    scanf(" %c", &grade); // Leading space discards preceding buffer newlines

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("========== STUDENT REPORT ==========\n");
    printf("Name: %s", studentName); //studentName already has the new line appeneded by fgets
    printf("Age : %d\n", age);
    printf("Height : %.2f\n", height);
    printf("Grade : %c\n", grade);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
