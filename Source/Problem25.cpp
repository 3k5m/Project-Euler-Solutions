#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define IS_DEBUG false

//copied from code for problem 13
string addBigNum(string n1, string n2){
  string Result;
  

  int l1 = n1.length(), l2 = n2.length();

  //makes sure first string is the longer one

  if(l2 > l1) {
    swap(n1, n2);
    swap(l1, l2);
  }

  reverse(n1.begin(), n1.end());
  reverse(n2.begin(), n2.end());

  int carry = 0;
  for(int i=0;i<l2;i++){
    int sum = ((n1[i]-'0') + (n2[i]-'0') + carry);

    Result.push_back(sum%10 + '0');
    carry = sum/10;
  }

  //if numbers may be different lengths
  for(int i=l2;i<l1;i++){
    int num = ((n1[i]-'0') + carry);
    Result.push_back(num%10 + '0');
    carry = num/10;
  }

  if(carry > 0) Result.push_back(carry + '0');

  reverse(Result.begin(), Result.end());

  return Result;
}

void solve(){
  string F1 = "1", F2 = "1", s;
  int i;
  //fibonacci sequence
  for(i=1;;i++){
    s = addBigNum(F1, F2);
    F1 = F2;
    F2 = s;
    if(s.length()>=1000){
      break;
    }
  }
  //adding on the indexes of first two initial terms
  i+=2;
  //print result
  cout<<i;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
