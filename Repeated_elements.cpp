#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int size= s.size();
     
    unordered_map<char, int> ans;
    for(int i=0;i<size;i++){
        ans[s[i]]++;
    }
    cout<<"\nRepeated elements are: ";
    for(auto it: ans){
        if(it.second>1){
            cout<<"\n"<<it.first<<": repeated ("<<it.second<<") times.";
        }
    }
    return 0;
}