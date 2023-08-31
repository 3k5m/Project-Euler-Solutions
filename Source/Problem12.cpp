#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int n = 500;

int triangle = 1;

int getdivisors(int num){
  int n=0;
  for(int i=1;i * i <= num;i++){
    if(num%i==0){
      //increment by 2 instead of 1 here to account for
      //both i and num/i (other divisor)
      n+=2;
    }
  }
  return n;
}

// O(nsqrt(n)) solution
void solve(){
  for(int i=2;getdivisors(triangle)<n;i++){
    triangle += i;
  }
  cout<<triangle;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
