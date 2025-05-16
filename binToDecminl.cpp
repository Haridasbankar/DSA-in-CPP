#include<iostream>
#include<vector>
using namespace std;
int binToDecimal(int n){
    
    int rem ,ans = 0, pow = 1;
    while(n>0){
        rem =  n % 10;
        n/=10;
        ans = ans+(rem * pow);
        pow*=2;
    }
    return ans;
}
int main() {
    int n = 1010;
    cout<<binToDecimal(n)<<endl;

    // for(int i=1;i<=10;i++){
    //     cout<<binToDecimal(i)<<endl;
    // }
    
    
    return 0;
}