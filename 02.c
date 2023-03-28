#include <stdio.h>

//函数指针

int ADD(int x, int y)
{
    int z=0;
    z=x+y;
    return z;
}
int main()
{
    int x = 12;
    int y = 22;
    ADD(x,y);

    int (*p)(int , int ) = ADD;

    printf("%p\n",&ADD);
    printf("%p\n",ADD);     //AAD与&ADD都是函数的地址

    printf("%d\n",(*p)(2,6));
    return 0;
}