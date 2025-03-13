// Memory Address in C

#include <stdio.h>
int main()
{
    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    short x = 1;
    short y = 2;
    short z = 3;
    printf("%d bytes\n", sizeof(x));
    printf("%d bytes\n", sizeof(y));
    printf("%d bytes\n", sizeof(z));
    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", &z);
    int p = 1;
    int q = 2;
    int r = 3;
    printf("%d bytes\n", sizeof(p));
    printf("%d bytes\n", sizeof(q));
    printf("%d bytes\n", sizeof(r));
    printf("%p\n", &p);
    printf("%p\n", &q);
    printf("%p\n", &r);
    double u = 4.3;
    double v = 2.5;
    double w = 9.7;
    printf("%d bytes\n", sizeof(u));
    printf("%d bytes\n", sizeof(v));
    printf("%d bytes\n", sizeof(w));
    printf("%p\n", &u);
    printf("%p\n", &v);
    printf("%p\n", &w);
    return 0;
}