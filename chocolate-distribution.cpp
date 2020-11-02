#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    sort(arr,arr+n);
    int minimum=arr[s-1]-arr[0];
    for(int i=1;i<=n-s;i++){
        int temp=arr[i+s-1]-arr[i];
        minimum= min(temp,minimum);
    }
    cout<<"Minimum Difference: "<<minimum;
    return 0;
}