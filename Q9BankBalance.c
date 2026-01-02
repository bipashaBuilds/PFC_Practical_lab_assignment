#include <stdio.h>

int main() {
    float balance;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    balance += balance * 0.10;   // interest 10%
    printf("After interest: %.2f\n", balance);

    balance += 500;              // bonus
    printf("After bonus: %.2f\n", balance);

    balance -= 200;              // charges
    printf("After charges: %.2f\n", balance);

    balance /= 2;                // division
    printf("After division: %.2f\n", balance);

    return 0;
}
/*
OUTPUT
Enter initial balance: 45000
After interest: 49500.00
After bonus: 50000.00
After charges: 49800.00
After division: 24900.00
*/