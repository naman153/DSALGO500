#include <bits/stdc++.h>
using namespace std;

void array_union(int arr1[],int arr2[],int n,int m){
    int j=0, i=0;
    cout<<"\nA U B: " ;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j++]<<" ";
        }
        else{
            cout<<arr1[i++]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr1[i++]<<" ";
    }
    while(j<m){
        cout<<arr2[j++]<<" ";
    }
}

void array_intersection(int arr1[],int arr2[],int n,int m){
    int j=0, i=0;
    cout<<"\nA n B: " ;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            cout<<arr1[i++]<<" ";
            j++;
        }
    }
    
}


int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n1,n2;
    cout<<"Enter length of 1st array:";
    cin>>n1;
    int arr1[n1];
    cout<<"\nEnter elements of 1st array:";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"\nEnter length of 2nd array:";
    cin>>n2;
    int arr2[n2];
    cout<<"\nEnter elements of 1st array:";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    array_union(arr1,arr2,n1,n2);
    array_intersection(arr1,arr2,n1,n2);
    
    return 0;
}
