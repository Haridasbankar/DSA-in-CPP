#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Number : ";
    cin>>n;
    int c;
    for(int i=1;i<=n;i++){

        for(int j=n-1;j>=0;j--){
            c=n-j;
            cout<<c<<' ';
        }
         
        n--;
        cout<<endl;
    }
}