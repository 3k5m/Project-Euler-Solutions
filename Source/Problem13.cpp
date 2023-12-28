#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define LEN_N 50
#define NUM_N 100
#define IS_DEBUG false


string addBigNum(string n1, string n2){
  string Result;
  

  int l1 = n1.length(), l2 = n2.length();

  //not really useful here, but could be useful for different lengths
  //makes sure first string is the longer one

  if(IS_DEBUG) cout<<l1<<" "<<l2<<"\n";
  if(l2 > l1) {
    swap(n1, n2);
    swap(l1, l2);
  }
  if(IS_DEBUG) cout<<l1<<" "<<l2<<"\n";

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

  if(IS_DEBUG) cout<<Result;
  return Result;
}

void solve(){
  string s; cin>>s;
  string s1, s2;
  s1 = s.substr(0,LEN_N);
  if(IS_DEBUG)cout<<s1<<"\n";
  for(int i=50;i<LEN_N*NUM_N;i+=LEN_N){
    s2 = s.substr(i,LEN_N);
    s1 = addBigNum(s1, s2);
    if(IS_DEBUG)cout<<s1<<"\n";
  }
  //print first 10 chars of result
  for(int i=0;i<10;i++){
    cout<<s1[i];
  }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    if(IS_DEBUG) {
      string s, t; cin>>s>>t;
      addBigNum(s,t);
    }
    solve();

    return 0;
}
