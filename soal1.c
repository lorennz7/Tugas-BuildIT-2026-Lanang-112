#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long sum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }

    printf("%lld", llabs(sum));

    return 0;
}
