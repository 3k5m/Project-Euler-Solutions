#include <bits/stdc++.h>
using namespace std;

const int NLIMIT = 20;
int primes[NLIMIT] = {};

bool isprime(int num) {
  bool primeflag = true;

  int checkfactors[NLIMIT] = {};

  if (num == 1)
    return true;
  for (int i = 2; i <= ceil(sqrt(num)); i++) {
    if (num % i == 0) {
      cout<<"factor detected num: "<<num<<" i: "<<i<<"\n";
      primeflag = false;
      int tempnum = num;
      tempnum /= i;
      while (round(tempnum) == tempnum) {
        
        cout<<"checkfactors increased, tempnum:"<<tempnum<<" i: "<<i<<"\n";
        checkfactors[i]++;
        tempnum /= i;
      }
      if (checkfactors[i] > primes[i]) {
        primes[i] = checkfactors[i];
      }
    }
  }
  return primeflag;
}
long long getnumber() {
  long long num = 1;
  for (int i = 1; i <= NLIMIT; i++) {
    if (isprime(i)) {
      primes[i] = 1;
    }
  }
  for (int i = 1; i <= NLIMIT; i++) {
    if (primes[i] != 0) {
      for (int j = 0; j < primes[i]; j++) {
        num *= i;
      }
    }
  }
  return num;
}
int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(0);
  cin.tie(0)->sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cout << getnumber();

  return 0;
}
