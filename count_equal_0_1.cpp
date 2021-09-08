#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cin>>s;
    int count0=0, count1=0, mc=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            count0++;
        }
        if(s[i]=='1'){
            count1++;
        }
        if(count0==count1){
            mc++;
        }
    }
    (mc==0)? cout<<"-1" : cout<<mc;

    return 0;
}