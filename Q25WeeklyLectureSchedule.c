#include <stdio.h>

int main() {
    int day;

    printf("Enter day (1-Mon to 6-Sat): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday: C Programming\n"); break;
        case 2: printf("Tuesday: Mathematics\n"); break;
        case 3: printf("Wednesday: Physics\n"); break;
        case 4: printf("Thursday: Data Structures\n"); break;
        case 5: printf("Friday: Electronics\n"); break;
        case 6: printf("Saturday: Lab Session\n"); break;
        default: printf("Invalid Day\n");
    }

    return 0;
}
/*OUTPUT
Enter day (1-Mon to 6-Sat): 5
Friday: Electronics
*/