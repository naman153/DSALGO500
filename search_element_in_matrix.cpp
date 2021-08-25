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

    int search_el;
    cout<<"Enter the element to be searched: ";
    cin>>search_el;
    bool res=0;
    for(int i=0;i<row;i++){
        if(search_el>=matrix[i][0] && search_el<=matrix[i][column-1]){
            for(int j=0;j<column;j++){
                if(search_el==matrix[i][j]){
                    res=1;
                    break;
                }
            }
        }
        else if(search_el>matrix[i][column-1] && search_el<matrix[i+1][0]){
            res=0;
            break;
        }
    }
    cout<<"\nResult: "<< res;

    return 0;
}