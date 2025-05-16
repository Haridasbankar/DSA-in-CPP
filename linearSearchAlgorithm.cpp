#include<iostream>
using namespace std;

int linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}

int main(){
    int target = 50;
    int arr[]= {1,2,3,4,5,6,7};
    int sz =7;
    cout<<linearSearch(arr,sz,target)<<endl;
}