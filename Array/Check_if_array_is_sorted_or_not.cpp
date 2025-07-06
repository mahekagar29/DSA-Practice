//Check if array is sorted or not
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
    for(int i=1;i<a;i++){
        if(arr[i]<=arr[i-1]){
            cout<<"Array is not sorted";
            return 0;
        }
    }
    cout<<"Array is sorted";
}
