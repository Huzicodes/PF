#include <stdio.h>

int main() {
    float accuracy, latency;
    int approvalStatus;

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter prediction latency (ms): ");
    scanf("%f", &latency);

    printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approvalStatus);

    if (accuracy >= 90 && latency <= 100 && approvalStatus == 1) {
        printf("Model Deployed Successfully!\n");
    } else {
        printf("Model Deployment Failed due to:\n");
        if (accuracy < 90) {
            printf("Accuracy too low\n");
        }
        if (latency > 100) {
            printf("Latency too high\n");
        }
        if (approvalStatus != 1) {
            printf(“Model not approved\n");
        }
    }

    return 0;
}
