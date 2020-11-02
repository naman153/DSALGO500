#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif


    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    merge(arr1, arr1+n1, arr2, arr2+n2, arr3);
    if((n1+n2)%2==0){
        int temp=(n1+n2)/2;
        cout<<"Median: "<<floor((arr3[temp-1]+arr3[temp])/2);
    }
    else{
        int temp=(n1+n2+1)/2;
        cout<<"Median: "<<arr3[temp-1];
    }
    
    
    return 0;
}