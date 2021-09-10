#include<bits/stdc++.h>
using namespace std;

int check_next(vector<int> &arr){
    int i;
    for(i=arr.size()-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            break;
        }
    }
    if(i>-1){

        for(int j=arr.size()-1;j>=0;j--){
            if(arr[j]>arr[i]){
                swap(arr[i], arr[j]);
                break;
            }
        }
        reverse(arr.begin()+i+1, arr.end());
    }
    else{
        reverse(arr.begin(), arr.end());
    }
    


    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int > arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    check_next(arr);
    cout<<"Next Permutation is: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
