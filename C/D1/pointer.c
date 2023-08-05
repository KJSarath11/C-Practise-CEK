#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 99, 4};
    int *b;
    b = a;
    printf("%d", *(b++)); // prints the value pointed to by b and then increments b
    return 0;
}
