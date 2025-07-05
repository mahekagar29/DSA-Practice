//Largest element
//brute force solution
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
    sort(arr.begin(),arr.end());
    cout<<arr[a-1];

}



//Optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,3,6,2,9,5,7};
    int mx=0;
    for(int i=0;i<7;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx;
}
