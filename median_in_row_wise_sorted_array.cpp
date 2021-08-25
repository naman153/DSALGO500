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
    vector<int> arr1;
    for(int i=0;i<matrix.size();i++){
        for(auto it=matrix[i].begin(); it<matrix[i].end();it++){
            arr1.push_back(*it);
        }
    }
    sort(arr1.begin(), arr1.end());
    int a=(arr1.size()-1)/2;
    cout<<"\nMedian: "<<arr1[a];


    return 0;
}