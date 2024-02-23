#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int maxn = 28123;
bool abunsum[maxn] = {0};
list<int> abun;

int getDivSum(int num){
    //cout<<"getting divisors of > "<<num<<"\n";
    if(num==1) return 1;

    int sum=1;
    //cout<<"\tdivisor > 1 \n";
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) {
            sum+=i;
            if(num/i != i){
                sum+=(num/i);
                //cout<<"\tdivisor > "<<num/i<<"\n";
            }
            //cout<<"\tdivisor > "<<i<<"\n";
        }
    }
    //cout<<"\ttotal divisor sum > "<<sum<<"\n";
    return sum;
}

void solve(){
    int finalsum = 0;
    for(int i=2;i<=maxn;i++){
        if(getDivSum(i)>i){
            //cout<<i<<" is abundant\n";
            abun.push_back(i);
            for(int a:abun){
                if(a+i < maxn){
                    abunsum[a+i] = true;
                }                
            }
        }
    }
    for(int i=0;i<maxn;i++){
        if(!abunsum[i]){
            finalsum+=i;
            //cout<<i<<" is not sum of two abun nums \n";
        }
    }
    cout<<finalsum;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
