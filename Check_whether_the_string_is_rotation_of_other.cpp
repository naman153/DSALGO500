#include<bits/stdc++.h>
using namespace std;

bool check_rotation(string a, string b){
    if(a.size()!= b.size()){
        return 0;
    }
    queue<char> t1;
    for(int i=0;i<a.size();i++){
        t1.push(a[i]);
    }

    queue<char> t2;
    for(int i=0;i<b.size();i++){
        t2.push(b[i]);
    }
    int k=b.size();
    while(k--){
        char ch = t2.front();
        t2.pop();
        t2.push(ch);
        if(t2==t1)
            return 1;
    }
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif

    string first;
    cout<<"Enter the first string: ";
    cin>>first;
    string second;
    cout<<"Enter the second string: ";
    cin>>second;
    
    if(check_rotation(first, second))
        cout<<"\n\n"<<first<<" and "<<second<<" are rotation of each other.";
    else
        cout<<"\n\n"<<first<<" and "<<second<<" are not rotation of each other.";
    return 0;
}



