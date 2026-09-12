int main() {
    int totalRecords, missingRecords, duplicateRecords;
    float missingPercent, duplicatePercent;

    printf("Enter total number of records: ");
    scanf("%d", &totalRecords);

    if (totalRecords <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    printf("Enter number of missing records: ");
    scanf("%d", &missingRecords);

    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicateRecords);

    missingPercent = (missingRecords / totalRecords) * 100;
    duplicatePercent = (duplicateRecords / totalRecords) * 100;

    if (missingPercent > 30.0f) {
        printf("Poor Quality Dataset\n");
    } else if (duplicatePercent > 20.0f) {
        printf("Dataset Requires Cleaning\n");
    } else {
        printf("Dataset Ready for Training\n");
    }

    return 0;
}
