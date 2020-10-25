#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r", stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<< "Maximum: "<< *max_element(arr, arr+n);
    cout<< "\nMinimum: "<< *min_element(arr, arr+n);

    return 0;
}