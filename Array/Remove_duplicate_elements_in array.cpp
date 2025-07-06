//Remove duplicate elements
//Brute force solution
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
    set<int> st;
    for(int i=0;i<a;i++){
        st.insert(arr[i]);
    }
    for(int it: st){
        cout<<it<<" ";
    }
}
