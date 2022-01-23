#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int num){
    int temp = num,reverse = 0;
    while(num > 0){
        reverse = 10 * reverse + num % 10;
        num = floor(num / 10);
    }
    if(reverse == temp){
        return true;
    }
    return false;
}
int getbiggestnumber(){
    int big = 0;
    for(int num1 = 999; num1 > 100; num1--){
        for(int num2 = num1; num2 > 100; num2--){
            int n = num1 * num2;
            if(n > big && ispalindrome(n)){
                big = n;
                cout<<"Changed big to "<<big<<"\n";
            }
            if(big > num1 * 999) return big;
        }
    }
    return big;
}
int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cout<<getbiggestnumber();

    return 0;
} 
