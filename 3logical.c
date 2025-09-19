#include <stdio.h>
int main() {
    int a = 10, b = 5;

    printf("a > 5 && b < 10 = %d\n", (a > 5 && b < 10)); // true && true → 1

    printf("a > 15 || b < 10 = %d\n", (a > 15 || b < 10)); // false || true → 1

    printf("!(a > b) = %d\n", !(a > b)); // !(true) → 0

    return 0;
}
