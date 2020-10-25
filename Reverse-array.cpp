#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void reverse_array(int arr[],int n){
    int start=0;
    int last=n-1;
    
    while(start<last){
        int temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        start++;
        last--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_array(arr,n);
    return 0;
}