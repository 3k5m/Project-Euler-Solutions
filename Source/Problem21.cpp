#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define BASE 100
#define IS_DEBUG true

int sumDivisors(int n){
  int sum = 0;
  for(int i=1;i<=sqrt(n);i++){
    if(n%i == 0){
      sum+=i;
      sum+=n/i;
    }
  }
  sum-=n;
  return sum;
}

void solve(){
  int amicSum = 0;
  for(int i=1;i<=10000;i++){
    int d = sumDivisors(i);
    if(sumDivisors(d) == i && i != d){
      amicSum+=i;
      amicSum+=d;
      cout<<"AMIC PAIR: "<<i<<" AND "<<d<<"\n";
    }
  }
  cout<<amicSum/2;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
