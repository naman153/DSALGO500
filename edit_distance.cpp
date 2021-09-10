#include<bits/stdc++.h>
using namespace std;


int check_distance(int i, int j, string s1, string s2){
    if(i==s1.size()){
        return s2.size()-j;
    }
    if(j==s2.size()){
        return s1.size()-i;
    }

    if(s1[i]==s2[j]){
        return check_distance(i+1, j+1, s1, s2);
    }
    
    else{
        int l=1+check_distance(i+1, j, s1, s2); //remove
        int m= 1+check_distance(i,j+1, s1, s2); //insert
        int r= 1+ check_distance(i+1, j+1, s1, s2); //replace
        return min(l,min(m,r));
    }

    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r",stdin);
        freopen("output1.txt","w", stdout);
    #endif

    string str1;
    cin>>str1;
    string str2;
    cin>>str2;

    int ans= check_distance(0,0,str1, str2);
    cout<<"MIN DISTANCE: "<<ans;



    return 0;
}