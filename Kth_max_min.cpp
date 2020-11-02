#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,k;
    cout<<"\nNo. of elements:";
    cin>>n;
    cout<<"\nThe kth value:";
    cin>>k;
    cout<<"\nEnter elements in array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\n"<<arr[k];
    cout<<"\n"<<arr[n-k-1];
    
    return 0;
}