#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define MAXNUM 1000000
#define IS_DEBUG 0

int cacheCount = 0;
unordered_map<int, int> nCache;

int nextTerm(unsigned long long num){
  if(num == 1) return 1;
  if(nCache.find(num)!=nCache.end()){
    cacheCount++;
    return nCache[num];
  }
  int steps;
  if(num%2==0){
    steps = nextTerm(num/2) + 1;
  }else{
    steps = nextTerm(3 * num + 1) + 1;
  }
  nCache[num] = steps;
  return steps;
}

void solve(){
  int maxSeq = -1, maxN;
  for(int i=1;i<=MAXNUM;i++){
    int k = nextTerm(i);
    if (IS_DEBUG) cout<<i<<" terms for "<<k<<" chain. \n";
    if(k > maxSeq) { 
      maxSeq = k; maxN = i;
      if(IS_DEBUG) cout<<"new biggest i found: "<<maxN<<" with length "<<maxSeq<<"\n";
    }
  }
  if(IS_DEBUG)cout<<"Used Cache "<<cacheCount<<" times\n";
  cout<<"Final longest chain start: "<<maxN<<" with length "<<maxSeq<<"\n";
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
