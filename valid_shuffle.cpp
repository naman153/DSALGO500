#include<bits/stdc++.h>
using namespace std;

bool check_shuffle(string a, string b, string target){
    string temp=a+b;
    sort(temp.begin(), temp.end());
    sort(target.begin(), target.end());
    return (temp == target);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    string a;
    string b;
    string result;
    cout<<"\nEnter the first string: ";
    cin>>a;
    cout<<"\nEnter the second string: ";
    cin>>b;
    cout<<"\nEnter the target string: ";
    cin>>result;

    if(check_shuffle(a,b,result))
        cout<<"\n"<<a<<" "<<b<<" is a valid shuufle to "<<result;
    else    
        cout<<"\n"<<a<<" and "<<b<<" is not a valid shuufle to "<<result;
    return 0;
}
