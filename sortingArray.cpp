#include<iostream>
using namespace std;
int main(){
    int mark[5] = {99,100,45,67,89};

    int arr[5]={2,3,5,4,9};
    int small = arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    // cout<<sizeof(arr)/sizeof(arr[0]);
    int i=1;
    while(i<size){
        if(arr[i]<small)
        {
            small = arr[i];
        }
        i++;
    }
    
    cout<<"Smallest is "<<small<<endl;
}