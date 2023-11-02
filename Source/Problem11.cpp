#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define MAXN 20
#define D_LENGTH 4
#define IS_DEBUG false

int grid[MAXN][MAXN];
pair<int, int> directions[8] = {{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1},{1,1},{1,-1}};

void solve(){
  int finproduct = 0, curi, curj, fproduct;
  for(int i=0;i<MAXN;i++){
    for(int j=0;j<MAXN;j++){
      cin>>grid[i][j];
    }
  }
  for(int i=D_LENGTH-1;i<=MAXN-D_LENGTH;i++){
    for(int j=D_LENGTH-1;j<=MAXN-D_LENGTH;j++){
      for(int d=0;d<8;d++){
        curi = i, curj = j;
        fproduct = 1;
        for(int k=0;k<D_LENGTH;k++){
          //cout<<"fproduct multiplying by..."<<grid[curi][curj]<<"\n";
          //cout<<"fproduct is currently "<<fproduct<<"\n";
          fproduct *= grid[curi][curj];
          curi+=directions[d].first;
          curj+=directions[d].second;
          //cout<<"fproduct is currently "<<fproduct<<" after multiplying\n";
        } 
        if(fproduct > finproduct) finproduct = fproduct;
      }
    }
  }
  cout<<finproduct;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
