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
    cout<<"Median: "<<floor((arr3[n1-1]+arr3[n1])/2);
    
    return 0;
}