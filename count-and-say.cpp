#include<bits/stdc++.h>
using namespace std;

string count_and_say(string &target, int n){
    int count=1;
    if(count==n){
        return target;
    }


    for(int i=1;i<n;i++){
        string temp=target;
        target="";
        queue<char> c;
        for(int i=0;i<temp.size();i++){
            c.push(temp[i]);
        }
        int cou=0;
        char ch=c.front();
        while(!c.empty()){
            if(ch==c.front()){
                cou++;
                c.pop();
            }
            else if(ch!=c.front()){
                string a= to_string(cou);
                string b(1, ch);
                target+=a+b;
                ch=c.front();
                cou=0;
            }
        }
        string a= to_string(cou);
        string b(1, ch);
        target+=a+b;


    }
    return target;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    string ans="1";
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    ans = count_and_say(ans, n);
    cout<<"\n"<<ans;
    return 0;
}
