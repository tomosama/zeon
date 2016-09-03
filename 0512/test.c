#include <stdio.h>

void foo3(void)
{
    int c = 10;
    char *s = "hello";
    printf("foo3\n");
    *s = 'H';
    printf("看不到我\n");
}
void foo2(void)
{
    int b = 5;
    printf("foo2\n");
    foo3();
}
void foo1(void)
{
    int a = 1;
    printf("foo1\n");
    foo2();
}
int main(void)
{
    foo1();
    return 0;
}
