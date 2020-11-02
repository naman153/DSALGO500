#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool output=false;
    int r= n-1;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        while(l<r){
            if (arr[i] + arr[l] + arr[r] == k) {
                cout<<"TRIPLET FOUND.\n";
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
                output=true;
                break;
            }
            else if (arr[i] + arr[l] + arr[r] < k)
                l++;
            else if(arr[i] + arr[l] + arr[r] > k)
                r--;
        }

    }
    if(!output){
        cout<<"NO TRIPLET FOUND.";
    }

    return 0;
}
