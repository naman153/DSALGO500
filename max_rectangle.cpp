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

    int max=0;
    for(int i=1;i<row;i++){
        for(int j=0;j<column;j++){
            if(matrix[i][j]!=0){
                matrix[i][j]+=matrix[i-1][j];
            }
        }
        
        int temp;
        sort(matrix[i].begin(), matrix[i].end());
        for(int j=0;j<column;j++){
            temp=0;
            temp = (matrix[i][j])*(matrix[i].size()-j);
            if(temp > max){
                max=temp;
            }
        }
    }

    cout<<"\nMax area rectangle is: "<<max;
    return 0;
}