#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nNo. of elements to be rotated in array: ";
    cin>>k;
    for(int i=0; i<k; i++){
        int l=1;
        for(int j=0;j<n-1;j++){
            int temp= arr[j];
            arr[j]=arr[l];
            arr[l]=temp;
            l++;
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}