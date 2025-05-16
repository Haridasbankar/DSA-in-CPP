#include<iostream>
using namespace std;

int productOfArray(int arr[],int sz){
    int product = 1;
    for(int i=0;i< sz;i++){
        product = arr[i]*product;
    }
    return product;
}
int sumOfArray(int arr[],int sz){
    int sum = 0;
    for(int i=0;i<sz;i++){
        sum = arr[i]+sum;
    }
    return sum;
}
int main(){


    int arr[] = {1,2,3,5,9,4,6};
    int sz = sizeof(arr)/sizeof(int);

    int product = productOfArray(arr,sz);
    int sum = sumOfArray(arr,sz);

    cout << "Sum of array: " << sum << endl;
    cout << "Product of array: " << product << endl;

    return 0;

}