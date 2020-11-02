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
    int count=0;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else if(arr[i]>arr[j]){
            arr[j-1]=arr[j-1] + arr[j];
            j--;
            count++;
        }
        else if(arr[i]<arr[j]){
            arr[i+1]=arr[i+1] + arr[i];
            i++;
            count++;
        }
    }
    cout<<"No. of operations performed: "<<count;
    return 0;
}