#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[] = {1,-4,7,5,-3,8,-9};
    int n = 7;

    int currsum = 0;
    int maxsum = INT_MIN;
    for(int str=0;str<n;str++){
        for(int end=str;end<n;end++){

            currsum += arr[end];

            maxsum = max(currsum, maxsum);
        }
    }
    cout<<"maximin subarray = "<<maxsum<<endl;

}