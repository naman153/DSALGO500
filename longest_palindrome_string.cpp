#include<bits/stdc++.h>
using namespace std;

int check_odd(string s, int m){
    string ans;
    for(int i=1;i<s.length();i++){
        int temp=1;
        int j=i-1;
        int k=i+1;
        while(j>=0 && k<=s.length()-1 && s[j]==s[k]){
            temp+=2;
            j--;
            k++;
        }
        if(temp>m){
            m=temp;
            ans= s.substr(j+1,k);
        }
    }
    cout<<"\nOdd length largest string is: "<<ans;
    return 0;
}
int check_even(string s, int m){
    string ans;
    for(int i=0;i<s.length();i++){
        int temp=0;
        int j=i;
        int k=i+1;
        while(j>=0 && k<=s.length()-1 && s[j]==s[k]){
            temp+=2;
            j--;
            k++;
        }
        
        if(temp>m){
            m=temp;
            ans= s.substr(j+1,k-1);
        }
    }
    cout<<"\nEven length largest string is: "<<ans;
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cin>>s;

    check_odd(s,0);
    check_even(s,0);
    

    return 0;
}
