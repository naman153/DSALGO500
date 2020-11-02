#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,test;
    cin>>test;
    
    while(test>0){
        test--;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,count=0;
        while(i<n-1){
            i+=arr[i];
            count++;
        }
        cout<<"\nMinimum no. of Jumps to be made: "<<count;
    }
    return 0;
}
