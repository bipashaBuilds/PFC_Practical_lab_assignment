#include <stdio.h>

void factorial(int n, int *fact) {
    int i;
    *fact = 1;

    for (i = 1; i <= n; i++) {
        *fact *= i;
    }
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, &result);

    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
