#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int n = 1000;

int a, b, c;

// O(n^2) solution lol
void solve(){
  for(a=1;a<=n;a++){
    for(b=1;b<=n;b++){
      c = n - a - b;
      if(a*a + b*b == c*c){
        cout<<a*b*c;
        return;
      }
    }
  }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
