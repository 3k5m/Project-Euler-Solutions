#include <iostream>
using namespace std;

int main() {
  int prev2num=1, prevnum=1, num, sum=0;

  while(num<=4000000){
    num = prevnum + prev2num;
    if(num>4000000) break;
    if(num%2==0){
      sum+=num;
    }
    cout<<num<<"\n";
    prev2num = prevnum;
    prevnum = num;
  }
  cout<<sum;
} 
