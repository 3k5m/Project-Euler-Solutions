#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define GRID_SIZE 21
#define IS_DEBUG 0

unsigned long long routes[GRID_SIZE][GRID_SIZE];

void solve(){
  for(int i=0;i<GRID_SIZE;i++) routes[i][0] = 1;
  for(int i=0;i<GRID_SIZE;i++) routes[0][i] = 1;
  for(int i=1;i<GRID_SIZE;i++){
    for(int j=1;j<GRID_SIZE;j++){
      routes[i][j] = routes[i-1][j] + routes[i][j-1];
      if(IS_DEBUG) cout<<routes[i][j]<<"\n";
    }
  }
  cout<<routes[GRID_SIZE-1][GRID_SIZE-1];
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
