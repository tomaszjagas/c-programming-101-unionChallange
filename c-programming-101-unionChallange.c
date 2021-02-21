#include <stdio.h>

union student {
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main() {
    union student record1;
    union student record2;

    // assigning values record1
    record1.letterGrade = 'B';
    record1.roundedGrade = 87;
    record1.exactGrade = 86.50;

    printf("Union record1 values example\n");
    printf("Letter grade: %c\n", record1.letterGrade);
    printf("Rounded grade: %d\n", record1.roundedGrade);
    printf("Exact grade: %f\n", record1.exactGrade);

    printf("Union record2 values example\n");
    // assigning values record2
    record2.letterGrade = 'A';
    printf("Letter grade: %c\n", record2.letterGrade);
    record2.roundedGrade = 100;
    printf("Rounded grade: %d\n", record2.roundedGrade);
    record2.exactGrade = 99.50;
    printf("Exact grade: %f\n", record2.exactGrade);

    return 0;
}