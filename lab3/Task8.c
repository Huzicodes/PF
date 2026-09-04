#include <stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Since the expected output asks for "Hello," on one line and the name on the next,
    // and since fgets() automatically appends a newline to the string,
    // we print "\nHello,\n" followed by "%s" (without adding an extra newline at the end).
    printf("\nHello,\n%s", fullName);

    return 0;
}
