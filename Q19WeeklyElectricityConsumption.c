#include <stdio.h>

int main() {
    float units, total = 0;
    int i;

    for (i = 1; i <= 7; i++) {
        printf("Enter electricity usage for day %d (units): ", i);
        scanf("%f", &units);
        total += units;
    }

    printf("Total weekly consumption = %.2f units\n", total);

    return 0;
}
