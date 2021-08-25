#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);

    #endif

    int row, column;
    cout<<"\nEnter the number of rows in matrix: ";
    cin>>row;
    cout<<"\nEnter the number of columns in matrix: ";
    cin>>column;
    vector<vector<int>> matrix( row , vector<int> (column));

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<int(row/2);i++){
        matrix[i].swap(matrix[row-1-i]);
    }

    for(int i=0;i<row;i++){
        for(int j=i+1;j<column;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }

    cout<<"\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}