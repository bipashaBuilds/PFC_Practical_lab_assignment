#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two account balances: ");
    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("First is greater: %d\n", a > b);
    printf("Second is greater: %d\n", b > a);

    return 0;
}
/*OUTPUT
Enter two account balances: 67000 54300
Equal: 0
First is greater: 1 
Second is greater: 0
*/