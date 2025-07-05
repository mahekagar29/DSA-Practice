#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;
        cin>>n;
        arr.push_back(n);
    }
    int fl=arr[0];
    int sl=-1;
    for(int i=0;i<a;i++){
        if(arr[i]>fl){
            sl=fl;
            fl=arr[i];
        }
    }
    cout<<"First Largest: "<<fl<<endl;
    cout<<"Second largest: "<<sl<<endl;

}
