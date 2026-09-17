#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

int compare(const void *a, const void *b)
{
    long long x = *(long long*)a;
    long long y = *(long long*)b;

    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

int main()
{
    int N;
    scanf("%d", &N);

    long long A[N];

    for(int i = 0; i < N; i++)
        scanf("%lld", &A[i]);

    qsort(A, N, sizeof(long long), compare);

    long long total = ((long long)N * (N - 1) / 2) % MOD;
    long long sama = 0;

    int count = 1;

    for(int i = 1; i <= N; i++)
    {
        if(i < N && A[i] == A[i-1])
        {
            count++;
        }
        else
        {
            sama += ((long long)count * (count - 1) / 2) % MOD;
            sama %= MOD;
            count = 1;
        }
    }

    printf("%lld", (total - sama + MOD) % MOD);

    return 0;
}
