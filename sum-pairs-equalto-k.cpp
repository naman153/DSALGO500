#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    cout<<"Pairs whose sum is equal to k:\n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<"("<<arr[i]<<", "<<arr[j]<<")\n";
                count++;
            }
        }
    }
    cout<<"Total no. of pairs: "<<count;
    
    return 0;
}