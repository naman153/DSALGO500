#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);

    #endif

    int row, column,n;
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
    for(int i=0;i<matrix.size();i++){
        sort(matrix[i].begin(), matrix[i].end());
    }

    vector<int> arr;
    for(int i=0;i<column;i++){
        if(matrix[0][i]==matrix[0][i-1])
            i++;
        int a=1;
        for(int j=1;j<row;j++){
            bool present = (find(matrix[j].begin(), matrix[j].end(), matrix[0][i])) != (matrix[j].end());
            if(present == 1){
                a++;
            }
        }
        if(a == row){
            arr.push_back(matrix[0][i]);
        }
    }

    cout<<"\nCommon elements are: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}