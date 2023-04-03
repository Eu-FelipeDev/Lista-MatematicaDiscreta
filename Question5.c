#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    mdc(b, a % b);
}

int main(void)
{
    int a;
    int b;
    printf("Entre dois números inteiros: ");
    scanf("%d %d", &a, &b);
    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    return 0;
}