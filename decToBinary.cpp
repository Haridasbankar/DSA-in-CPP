#include<iostream>
using namespace std;

int decToBinary(int n){
    int ans = 0,rem,pow = 1;
    while(n>0){
        rem = n % 2;
        n/=2;
        ans+=(rem * pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int n = 50;
    // cout<<decToBinary(n);
    for(int i=1;i<=10;i++){
        cout<<decToBinary(i)<<endl;
    }
}