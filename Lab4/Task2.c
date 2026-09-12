#include <stdio.h>

int main() {
    float score;

    printf("Enter AI confidence score (0-100): ");
    scanf("%f", &score);

    if (score < 0 || score > 100) {
        printf("Invalid Score\n");
    } else if (score >= 0 && score <= 49) {
        printf("Low Confidence\n");
    } else if (score >= 50 && score <= 79) {
        printf("Moderate Confidence\n");
    } else {
        printf("High Confidence\n");
    }

    return 0;
}
