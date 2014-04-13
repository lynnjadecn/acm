#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main(){
    int T, i;
    cin >> T;
    for(i = 1; i <= T; i++){
       long long n;
       scanf("%lld",&n);
       long long result, a;
       if(n % 2 == 0)
         a = (((n / 2) % mod) * (n + 1)) % mod;
       else
         a = ((((n + 1) / 2) % mod) * n) % mod;
       
       result = (((a * a) % mod) * (a - (2 * n) % mod + 2)) % mod;
       printf("Case %d: %lld\n",i,result);
    }
    return 0;
}
