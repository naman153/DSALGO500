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
    sort(arr,arr+n);
    int result=0,count=0;

    for(int i=0; i<n; i++){
        if(i>0 && arr[i] == (arr[i-1] +1)){
            count++;
        }
        else{
            count=1;
        }
        result= max(result, count);
    }
    cout<<"Maximum Consequetive Sequence:"<<result;

    

    return 0;
}