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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i=0;
    while(i < n){
        if(arr[i]>k){
            break;
        }
        else{
            i++;
        }
    }
    int j=i,count=0;
    for ( ;i<n;i++){
        if((arr[i]<=k) && (arr[i-1]<=k)){
            continue;
        }
        if(arr[i]<=k){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
            count++;
        }
    }
    cout<<"Minimum no. of swaps required are: "<<count;
    return 0;
}