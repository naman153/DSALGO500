#include<bits/stdc++.h>
using namespace std;

int all_subsequence(string s){
    int ans=0;
    for(int i=0;i<s.length();i++){
        
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                int temp=0;
                int k=i;
                int l=j;
                while(s[k]==s[l]){
                    k++;
                    l++;
                    temp++;
                }
                j=l-1;
                ans=max(ans,temp);
            }
        }
    }
    
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cin>>s;
    int ans=all_subsequence(s);
    cout<<"Longest Recurring Subsequence: "<<ans;
    

    return 0;
}
