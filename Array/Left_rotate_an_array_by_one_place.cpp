//Left rotate an array by one place
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
    int temp=arr[0];
    for(int i=0;i<a-1;i++){
        arr[i]=arr[i+1];
    }
    arr[a-1]=temp;
    cout<<"Rotated array: ";
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}
