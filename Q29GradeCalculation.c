#include <stdio.h>

char findGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    int i;
    float marks[5], total = 0, avg;

    for (i = 0; i < 5; i++) {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    avg = total / 5;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);
    printf("Grade = %c\n", findGrade(avg));

    return 0;
}
