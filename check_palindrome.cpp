#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cout<<"Enter the string for checking whether it is palindrome or not: ";
    cin>>s;
    bool ans=1;
    int size= s.size();
    for(int i=0;i<=size/2;i++){
        if(s[i] != s[size-1-i]){
            ans=0;
            break;
        }
    }
    (ans==0)? cout<<"\nNot a Palindrome." : cout<<"\nA Palindrome.";

    return 0;
}