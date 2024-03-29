#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const ull n = 20;
ull num = 1;

void solve(){
    for(ull i=2;i<=n;i++){
        if(num % i != 0){
            ull j = gcd(i, num);
            num *= (i/j);
        }
    }
    cout<<num;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
