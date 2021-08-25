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

    int max= INT_MIN;
    for(int i=0;i<row;i++)
    for(int j=0;j<column;j++)
        for(int k=i+1;k<row;k++)
        for(int l=j+1;l<column;l++)
            if(max < (matrix[k][l] - matrix[i][j]))
                max = matrix[k][l] - matrix[i][j];

    cout<<"\n"<<max;

    return 0;
}