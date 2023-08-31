#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int n = 2000000;

ull sum = 0;

bool isprime(int num){
  if(num == 2||num == 3) return true;
  for(int i=2;i * i <= num;i++){
    if(num%i==0){
      return false;
    }
  }
  return true;
}

// O(nsqrt(n)) solution
void solve(){
  for(int i=2;i<n;i++){
    if(isprime(i)){
      sum+=i;
    }
  }
  cout<<sum;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
