#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

void fibonacci() {
  ull f_0 = 1, f_1 = 1, f_c, f_s = 0, n, i=3;
  cout<<"Enter N: "; cin>>n;
  cout<<"\n";
  while(n--){
    f_c = f_0 + f_1;
    f_s += f_c;
    cout<<i<<"th term: "<<f_c<<"\n";

    f_0 = f_1; f_1 = f_c;
    i++;
  }
  cout<<"Total Series Sum: "<<f_s;
}

void idkwhatthisrandomthingis() {
}

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0)->sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  fibonacci();

  return 0;
}
