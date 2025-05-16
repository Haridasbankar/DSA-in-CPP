#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> ver {1,2,3,4,5,6,7};

    cout<<"size = "<<ver.size()<<endl;

    for(int val : ver){
        cout<<val<<endl;
    }cout<<endl;

    vector<int>val;
    val.push_back(20);
    val.push_back(22);
    val.push_back(60);
    val.push_back(30);
    val.push_back(24);

    cout<<"total size of vector: "<<val.size()<<endl;//5
    cout<<"capacity of vector: "<<val.capacity()<<endl;//8

    val.pop_back();//pop 24
    cout<<"after total size of vector: "<<val.size()<<endl;//5

    for(int val : val){
        cout<<val<<endl;
    }cout<<endl;

    cout<<val.front()<<endl;//20
    cout<<val.back()<<endl;//30
    
    cout<<val.at(3);//30




}