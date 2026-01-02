#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';
    double d = 12.345;

    printf("int: %d, size = %lu bytes\n", i, sizeof(i));
    printf("float: %.2f, size = %lu bytes\n", f, sizeof(f));
    printf("char: %c, size = %lu bytes\n", c, sizeof(c));
    printf("double: %.3lf, size = %lu bytes\n", d, sizeof(d));

    return 0;
}
/*OUTPUT
int: 10, size = 4 bytes
float: 5.50, size = 4 bytes
char: A, size = 1 bytes
double: 12.345, size = 8 bytes
*/