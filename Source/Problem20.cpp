#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define BASE 100
#define IS_DEBUG true

//interestingly, you can just use addBigNum for problems 13, 16, AND 20.
//copied from code for problem 13
string addBigNum(string n1, string n2){
  string Result;
  

  int l1 = n1.length(), l2 = n2.length();

  //not really useful here, but could be useful for different lengths
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
  // (not needed here, but could be useful for other things)
  for(int i=l2;i<l1;i++){
    int num = ((n1[i]-'0') + carry);
    Result.push_back(num%10 + '0');
    carry = num/10;
  }

  if(carry > 0) Result.push_back(carry + '0');

  reverse(Result.begin(), Result.end());

  return Result;
}

string multiplyBigNum(string n1, int n2){
  string product = n1;
  for(int i=1;i<n2;i++){
    product = addBigNum(product, n1);
  }
  return product;
}

void solve(){
  string s = to_string(1);
  for(int i=1;i<BASE;i++){
    s = multiplyBigNum(s, i);
    if(IS_DEBUG) cout<<s<<"\n";
  }
  //add digits of result
  int sum=0;
  for(int i=0;i<s.length();i++){
    if(IS_DEBUG) cout<<"\n"<<s[i]<<"";
    sum += (s[i]-'0');
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
