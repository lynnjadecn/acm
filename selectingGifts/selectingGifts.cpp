#include <stdio.h>

#define moder 1000000007

int main(){
    int T, i;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        long long n;
        scanf("%lld", &n);
        long long sum, sqsum, cubsum, result;
        sum = ((n * (n + 1))) % moder / 2;
        sqsum = (((n * (n + 1))* (2 * n + 1))) % moder / 6;
        cubsum = (sum * sum) % moder;
        result = ((((((sum * sum) % moder) * sum) % moder + (3 * cubsum) % moder) % moder - ((3 * sum) % moder * sqsum) % moder) + moder) % moder;
        printf("Case %d: %lld\n", i, result);
    }
    return 0;
}
