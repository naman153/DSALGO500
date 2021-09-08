//STL METHOD
/*
#include<bits/stdc++.h>
using namespace std;
vector<string> ans;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string s;
    cin>>s;
    sort(s.begin(), s.end());
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(), s.end()) );

    for(auto i= ans.begin(); i<ans.end(); i++){
        cout<<*i<<endl;
    }
    
    

    return 0;
}
*/

//LOOP ANS

#include<bits/stdc++.h>
using namespace std;
vector<string> ans;

int permute(string s, int id){
    if(id==s.size()){
        ans.push_back(s);
        return 0;
    }
    for(int i=id;i<s.length();i++){
        swap(s[i], s[id]);
        permute(s, id+1);
        swap(s[i], s[id]);
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
    permute(s,0);
    unique(ans.begin(), ans.end());
    for(auto i= ans.begin(); i<ans.end(); i++){
        cout<<*i<<endl;
    }
    
    

    return 0;
}