#include <iostream>
using namespace std;

int main() {
  int sum=0;
  int max = 1000;
  for(int i=0;i<max;i++){
      if(i%5==0||i%3==0)
        sum+=i;
  }
  cout<<sum;
} 
