#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int rows = 100;
int triangle[105][105] = {0};


void inputTriangle(){
  for(int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
      cin>>triangle[i][j];
    }
  }
}
void solve(){
  inputTriangle();

  for(int i=rows-1; i>0;i--){
    for(int j=1;j<=i;j++){
      triangle[i][j] += max(triangle[i+1][j], triangle[i+1][j+1]);
    }
  }
  cout<<triangle[1][1];
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
