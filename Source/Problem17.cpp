#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;


//did this two different ways
//first way (way more inefficient) is to use strings and make the words, then count length
const string numText[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const string numText2[10] = {"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
const string numSpecial[10] = {"ten", "eleven", "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const string numHundred = "hundred";
const string numThousand = "onethousand";
const string numAnd = "and";

//second way is to add the lengths directly, although not as visual and easy to debug
const int nT[10] = {0,3,3,5,4,4,3,5,5,4};
const int nT2[10] = {0,3,6,6,5,5,5,7,6,6};
const int nT3[10] = {3,6,6,8,8,7,7,9,8,8};
const int nH = 7;
const int nTh = 11;
const int nA = 3;

void solve(){
  int s = 0, sum = 0;
  for(int j=1;j<=1000;j++){
    int i = j;
    if(i==1000){
      s+=nTh;
      sum+=nTh;
      continue;
    }
    string n="";
    if(i>=100){
      s+=nT[i/100];
      s+=nH;
      n+=numText[i/100];
      n+=numHundred;
      i%=100;
      if(i>0){
        s+=nA;
        n+=numAnd;
      }
    }
    if(i>=20){
      s+=nT2[i/10];
      n+=numText2[i/10];

      i%=10;
      s+=nT[i];
      n+=numText[i];

    }else if(i>=10){
      s+=nT3[i-10];
      n+=numSpecial[i-10];

    }else{
      i%=10;
      s+=nT[i];
      n+=numText[i];
    }
    sum+=n.length();
    cout<<n<<" N, S VALUE:"<<s<<", SUM: "<<sum<<"\n";
  }
  cout<<s;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
