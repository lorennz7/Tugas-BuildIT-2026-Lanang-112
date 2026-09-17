#include <stdio.h>

int main()
{
    int a, b, c;
    int ronde = 0;

    scanf("%d %d %d", &a, &b, &c);

    while(1)
    {
        if(a == b || a == c || b == c)
            break;

        int max, min;

        if(a > b && a > c)
            max = 1;
        else if(b > a && b > c)
            max = 2;
        else
            max = 3;

        if(a < b && a < c)
            min = 1;
        else if(b < a && b < c)
            min = 2;
        else
            min = 3;

        if(max == 1)
            a--;
        else if(max == 2)
            b--;
        else
            c--;

        if(min == 1)
            a++;
        else if(min == 2)
            b++;
        else
            c++;

        ronde++;
    }

    printf("%d", ronde);

    return 0;
}
