#include <stdio.h>

int main() {
    char name[100];
    char city[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // We use a single getchar() to swallow the leftover newline '\n' remnant from the scanf above.
    // This ensures the next fgets() doesn't get skipped!
    getchar();

    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    // Since fgets() automatically keeps the trailing newline '\n' in memory,
    // we omit the '\n' inside the printf format string to prevent double-spacing!
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("City: %s", city);

    return 0;
}
