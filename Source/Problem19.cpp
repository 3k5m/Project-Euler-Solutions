#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int w = 1;
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void solve(){
  int cdays, sum = 0;
  for(int y = 1900; y <= 2000; y++){
    for(int m = 1; m <= 12; m++){
      cdays = months[m-1];
      if(m == 2 && y%4 == 0){
        cdays++;
      }
      for(int d = 1; d<=cdays; d++){
        if(w == 8) w = 1;
        if(d == 1 && w == 1 && y >= 1901){
          sum++;
        }
        w++;
      }
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
