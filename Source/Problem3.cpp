#include <iostream>
using namespace std;

bool isprime(int num){
  if(num == 2||num == 3) return true;
  for(int i=2;i * i <= num;i++){
    if(num%i==0){
      return false;
    }
  }
  return true;
}

int main() {
  long long number = 600851475143, factor = 2;
  while(number>1){
    while(number%factor == 0){
      number = number / factor;
    }
    if(number == 1) break;
    do{
      factor++;
    }while(!isprime(factor));
  }
  cout<<factor;
} 
