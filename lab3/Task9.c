#include <stdio.h>

int main() {
    char productName[50];
    int quantity;
    float price;

    printf("Enter product name: ");
    fgets(productName, sizeof(productName), stdin);

    printf("\nEnter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Product Name: %s", productName); // No '\n' here because fgets already has one!
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);

    return 0;
}
