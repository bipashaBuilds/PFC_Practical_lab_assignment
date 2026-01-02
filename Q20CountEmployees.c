#include <stdio.h>

int main() {
    int age, count = 0, i;

    for (i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);

        if (age >= 30)
            count++;
    }

    printf("Number of employees aged 30 or above = %d\n", count);

    return 0;
}
/*OUTPUT
 Enter age of employee 1: 56
Enter age of employee 2: 45
Enter age of employee 3: 34
Enter age of employee 4: 23
Enter age of employee 5: 28
Enter age of employee 6: 79
Enter age of employee 7: 78
Enter age of employee 8: 76
Enter age of employee 9: 45
Enter age of employee 10: 88
Number of employees aged 30 or above = 8
*/