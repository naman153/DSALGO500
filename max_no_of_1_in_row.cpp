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
    
    int result=0;
    int max=0;
    for(int i=0;i<matrix.size();i++){
        int temp=count(matrix[i].begin(), matrix[i].end(), 1);
        if(temp>max){
            result=i;
            max=temp;
        }
    }

    cout<<"\nRow with max number of 1's is: "<<result;
    return 0;
}