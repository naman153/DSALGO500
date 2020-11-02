#include<bits/stdc++.h>
using namespace std;

void largest_sum_subarray(int arr[], int n){
    int largest=0,count=0;
    for(int i=0;i<n;i++){
        count=count+arr[i];
        if(largest<count){
            largest=count;
        }
        if(count<0){
            count=0;
        }
    }
    if(largest>0){
        cout<<"Largest Subarray(Kadane's): "<<largest;
    }
    else{
        cout<<"Largest Subarray(Kadane's): "<<*max_element(arr, arr + n);
    }
    
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
    largest_sum_subarray(arr,n);

    return 0;
}