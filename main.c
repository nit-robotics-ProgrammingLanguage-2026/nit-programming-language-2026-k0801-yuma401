#include <stdio.h>

int main(void)
{
    int a, b, c;
    int *p, *q, *r;

    p = &a;
    q = &b;
    r = &c;

    if (scanf("%d", p) != 1) {
        return 1;
    }

    *q = 5;
    *r = *p + *q;

    printf("%d,%d,%d", a, b, c);
    return 0;
}
