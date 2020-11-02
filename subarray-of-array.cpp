#include<bits/stdc++.h>
using namespace std;

bool subarray_of_array(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            return true;
            break;
        }
    }
    return false;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int count=0;

    for(int i=0;i<n2;i++){
        if(subarray_of_array(arr1,n1,arr2[i])){
            count+=1;
        }
    }

    if(count==n2){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }
    
    return 0;
}