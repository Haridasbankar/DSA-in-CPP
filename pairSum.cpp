#include<iostream>
#include <vector>
using namespace std;

vector<int> pairOfSum(vector<int> arr,int target){
    vector<int> ans ;
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
               ans.push_back(i);
               ans.push_back(j);
               return ans; 
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,7,9,22};
    
    int target = 31;
    vector<int> ans = pairOfSum(arr, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}