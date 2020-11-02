#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,k;
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=0,min=10000;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] <= (max/2)){
            arr[i]=arr[i]+k;
        }
        else if(arr[i] > (max/2)){
            arr[i]=arr[i]-k;
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max-k <<" "<<min;
    cout<<"\nMinimum Difference: "<<max-k-min;
    return 0;
}