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
    int water=0;
    max(arr[0],arr[n]);
    for(int i=1;i<n-1;i++){
        int l= *max_element(arr, arr + i);
        int r= *max_element(arr+i, arr+n);
        int temp=(min(l,r))-arr[i];
        if(temp>0){
            water+=temp;
        }
    }
    cout<<"Max Rainwater stored: "<<water;
    return 0;
}