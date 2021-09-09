#include<bits/stdc++.h>
using namespace std;

int calculate_min(vector<int> arr, int size, int k){
    vector<int > cost(size+1,0);
    vector<int> seq(size,0);
    vector<vector<int>> extra(size, vector<int>(size,0));

    for(int i=0;i<size;i++){
        
        extra[i][i] = k - arr[i];

        for(int j=i+1;j<size;j++){
            extra[i][j]=extra[i][j-1] - arr[j]-1;
        }
    }
    
    for(int i=0;i<extra.size();i++){
        for(int j=i;j<extra[i].size();j++){
            if(extra[i][j]<0){
                extra[i][j]= INT_MAX;
            }
            else if(extra[i][j]>=0 && j+1==size){
                extra[i][j]=0;
            }
            else{
                extra[i][j]=pow(extra[i][j],2);
            }
        }
    }

    cost[0]=0;
    for(int j=0;j<extra.size();j++){
        cost[j+1]=INT_MAX;
        for(int i=0;i<=j;i++){
            if(extra[i][j]!=INT_MAX && cost[i]!=INT_MAX &&(cost[i]+extra[i][j] < cost[j+1])){
                cost[j+1]= cost[i] + extra[i][j];
                seq[j]=i;
            }
        }
    }
    cout<<"Total Min Cost: "<<cost[cost.size()-1];
    return 0;
}



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    calculate_min(arr, size, k);


    return 0;
}