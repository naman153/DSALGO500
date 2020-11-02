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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

    int res=n+1;

    for(int i=0;i<n;i++){
        int count=0, temp=0, j=i;
        while(temp<=sum && j<n){
            temp += arr[j];
            count+=1;
            j++;
        }
        if(temp>sum && count<res){
            res=count;
        }
    }
    if(res>n)
        res=0;
    cout<<"Minimum no. of elements in subarray: "<<res;

    return 0;
}