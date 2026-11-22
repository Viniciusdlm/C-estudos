#include <stdio.h>

int main(void)
{
    printf("%d + %d = %d\n", 12, 18, 12 + 18);
    printf("%d - %d = %d\n", 15, 10, 15 - 10);
    printf("%d * %d = %d\n", 15, 10, 15 * 10);

    /* A divisão entre inteiros descarta a parte decimal: 15 / 10 resulta em 1. */
    printf("%d / %d = %d\n", 15, 10, 15 / 10);

    return 0;
}
