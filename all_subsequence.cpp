#include<bits/stdc++.h>
using namespace std;
vector<string> ans;

int all_subsequence(string s){
    for(int i=0;i<pow(2,s.length());i++){
        string temp="";
        for(int j=0;j<s.length();j++){
            if(i&(1<<j)){
                temp+=s[j];
            }
        }
        ans.push_back(temp);
    }
    
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cin>>s;
    all_subsequence(s);
    ans.erase(ans.begin(), ans.begin()+1);
    cout<<"All Subsequence of a string are: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    

    return 0;
}
