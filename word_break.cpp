#include<bits/stdc++.h>
using namespace std;

int check_possible(vector<string> b, string a){
    string temp ="";
    for(int i=0;i<a.size();i++){
        temp += a[i];
        if(find(b.begin(), b.end(), temp) != b.end()){
            temp="";
        }
    }
    if(temp!=""){
        return 0;
    }
    return 1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<string > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string b;
    cin>>b;

    int ans=check_possible(arr, b);
    cout<<ans;

    return 0;
}
