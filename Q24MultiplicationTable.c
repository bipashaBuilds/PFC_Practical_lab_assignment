#include <stdio.h>

int main() {
    int choice, num, i;

    do {
        printf("\n1. Print Table\n0. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);

            i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        }

    } while (choice != 0);

    return 0;
}
/*OUTPUT
1. Print Table
0. Exit       
Enter choice: 1
Enter number: 7
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70

1. Print Table
0. Exit
Enter choice: 0
*/