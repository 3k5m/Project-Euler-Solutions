#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const ull n = 100;
ull sumofsquares = 0, squareofsums = 0;

void solve(){
    for(ull i=1;i<=n;i++){
        sumofsquares += i * i;
        squareofsums += i;
    }
    squareofsums = squareofsums * squareofsums;
    cout<<llabs(sumofsquares - squareofsums);
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
