#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int n = 10001;

bool isprime(int num){
  if(num == 2||num == 3) return true;
  for(int i=2;i * i <= num;i++){
    if(num%i==0){
      return false;
    }
  }
  return true;
}

void solve(){
    int i=1, j=2;
    for(;i<n+1;j++){
        if(isprime(j)) i++;
    }
    cout<<j-1;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
