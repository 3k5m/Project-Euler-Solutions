#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define MAXNUM 1000000
#define IS_DEBUG false

map<int, int> nextNum;

int collatz(int i){

  int steps = 1, n=i;

  while(n != 1){
    if(nextNum.count(i)>0){
      if (IS_DEBUG) cout<<i<<" found i in nextNum \n";
      return steps + nextNum[i];
    }else{
      if (IS_DEBUG) cout<<i<<" did not find i in nextNum \n";
      if(n%2==0){
        n = n/2;
      }else{
        n = 3*n + 1;
      }
    }
    steps++;
  }
  nextNum[i] = steps;
  return steps;
}

void solve(){
  int maxSeq = -1, maxN;
  for(int i=1;i<=MAXNUM;i++){
    int k = collatz(i);
    if (IS_DEBUG) cout<<k<<" terms for "<<i<<" chain. \n";
    if(k > maxSeq) { 
      maxSeq = k; maxN = i;
      if (IS_DEBUG) cout<<"   new biggest i found: "<<maxN<<" with length "<<maxSeq<<"\n";
    }
  }
  
  cout<<"Final longest chain start: "<<maxN<<" with length "<<maxSeq<<"\n";
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
