#include <stdio.h>

int main() {
    int x = 5;

    printf("Pre-increment: %d\n", ++x);
    printf("Post-increment: %d\n", x++);
    printf("Final value of x: %d\n", x);

    return 0;
}
/* OUTPUT
Pre-increment: 6
Post-increment: 6
Final value of x: 7
*/