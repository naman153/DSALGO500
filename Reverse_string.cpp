#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    vector<char> arr;
    int n;
    cout<<"\nEnter the number of elements of array: ";
    cin>>n;
    cout<<"\nEnter the elements of array: ";
    for(int i=0;i<n;i++){
        char s;
        cin>>s;
        arr.push_back(s);
    }
    reverse(arr.begin(), arr.end());
    cout<<"\nReverse string: ";
    for(auto it=arr.begin(); it<arr.end(); it++){
        cout<<*it<<" ";
    }


    return 0;
}