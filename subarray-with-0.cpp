#include<bits/stdc++.h>
using namespace std;

bool subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int pre_sum=arr[i];
        int sum=0;
        if(arr[i]==0){
            return true;
            break;
        }
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if((pre_sum==sum || sum==0) && i!=j){
                return true;
                break;
            }
        }

    }
    return false;
}


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
    
    if(subarray(arr,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}