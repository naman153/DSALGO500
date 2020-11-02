#include<bits/stdc++.h>
using namespace std;


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,res0=0,res1=0,res2=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            res0++;
        }
        if(arr[i]==1){
            res1++;
        }
        if(arr[i]==2){
            res2++;
        }
    }

    for(int i=0;i<res0;i++){
        cout<<"0 ";
    }
    for(int i=0;i<res1;i++){
        cout<<"1 ";
    }
    for(int i=0;i<res2;i++){
        cout<<"2 ";
    }

    return 0;
}