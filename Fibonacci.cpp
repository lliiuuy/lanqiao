#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    scanf("%lld",&n);
    long long sum[n];
    sum[0] = 1;
    sum[1] = 1;
    for(long long i = 2; i < n; i++)
        sum[i] = (sum[i-1]+sum[i-2])%10007;
    printf("%lld", sum[n-1]);
    return 0;
}
