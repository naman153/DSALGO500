#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int row, column;
    cout<<"Enter the number of rows in matrix: ";
    cin>>row;
    cout<<"Enter the number of columns in matrix: ";
    cin>>column;
    vector<vector<int>> matrix( row , vector<int> (column));

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int> res;
    int left=0, right=column-1, up=0, down= row-1;

    while(left<=right && up<=down){
        for(int i=left;i<=right;i++){
            res.push_back(matrix[up][i]);
        }
        up++;
        for(int i=up;i<=down;i++){
            res.push_back(matrix[i][right]);
        }
        right--;
        for(int i=right;i>=left;i--){
            res.push_back(matrix[down][i]);
        }
        down--;
        for(int i=down;i>=up;i--){
            res.push_back(matrix[i][left]);
        }
        left++;
    }

    cout<<"result: "<<endl;
    for(auto it=res.begin(); it<res.end();it++){
        cout<<*it<<" ";
    }


    return 0;
}