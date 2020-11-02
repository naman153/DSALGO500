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
    int i=0,b;
    while(i<n){
        if(arr[i]== *min_element(arr,arr+n)){
            b=i;
            break;
        }
        i++;
    }
    i=0;
    int s;
    while(i<n){
        if(arr[i]== *max_element(arr+b ,arr+n)){
            s=i;
            break;
        }
        i++;
    }
    if(b==s){
        cout<<"Best time to sell the shares: 0th day.";
    }
    else
        cout<<"Best time to sell the shares: "<<i+1<<"th day.";
    return 0;
}