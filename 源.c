//欧几里德算法  

#include <stdio.h>  

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main(void)
{
    int a, b;
    printf("enter two number:\n");
    scanf("%d %d", &a, &b);
    printf("最大公约数为:%d\n", gcd(a, b));

    system("pause");
    return 0;
}