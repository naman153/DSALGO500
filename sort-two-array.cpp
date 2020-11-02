#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int j=0,i=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j++]<<" ";
        }
        else{
            cout<<arr1[j++]<<" ";
            i++;
        }
    }
    while(i<n){
        cout<<arr1[i++]<<" ";
    }
    while(j<m){
        cout<<arr2[j++]<<" ";
    }

                            
    return 0;
}