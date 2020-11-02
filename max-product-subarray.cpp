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

    int max_product=0,i=0;
    while(i<n){
        int j=i+1;
        int mul=arr[i];
        while(j<n){
            mul=mul * arr[j];

            if(mul > max_product){
                max_product=mul;
            }
            j++;
        }
        i++;
    }

    cout<<"Max Product: "<<max_product;

    return 0;
}