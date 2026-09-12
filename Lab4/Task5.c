#include <stdio.h>

int main() {
    int role, accountStatus, securityLevel;

    printf("Enter User Role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);

    printf("Enter Account Status (1 = Active, 0 = Inactive): ");
    scanf("%d", &accountStatus);

    printf("Enter Security Level: ");
    scanf("%d", &securityLevel);

    if (accountStatus == 0) {
        printf("Access Denied\n");
    } else {
        if (role == 1 && securityLevel >= 3) {
            printf("Access Granted\n");
        } else if (role == 2 && securityLevel >= 2) {
            printf("Access Granted\n");
        } else if (role == 3 && securityLevel >= 1) {
            printf("Access Granted\n");
        } else {
            printf("Access Denied\n");
        }
    }

    return 0;
}
