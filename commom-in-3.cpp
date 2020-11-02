#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int n3;
    cin>>n3;
    int arr3[n3];
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }

    int i=0,j=0,k=0,count=0;
    cout<<"Similar Elements are: ";
    while(i<n1 || j<n2 || k<n3){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]<arr3[k]){
            i++;
        }
        if(arr2[j]<arr1[i]){
            j++;
        }
        if(arr2[j]<arr3[k]){
            j++;
        }
        if(arr3[k]<arr2[j]){
            k++;
        }
        if(arr3[k]<arr1[i]){
            k++;
        }
        if(arr1[i]==arr2[j] && arr1[i]==arr3[k]){
            cout<<arr1[i++]<<" ";
            j++;
            k++;
            count++;
        }
    }
    cout<<"\nNo. of same elements in all 3 arrays are: "<<count;
    return 0;
}