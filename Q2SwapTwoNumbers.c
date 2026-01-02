#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
/*Output
Enter two numbers: 67
54
After swapping:
a = 54, b = 67 
*/