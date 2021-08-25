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
    cout<<"\nEnter the N number: ";
    cin>>n;
    
    vector<int> arr1;
    for(int i=0;i<matrix.size();i++){
        for(auto it=matrix[i].begin(); it<matrix[i].end();it++){
            arr1.push_back(*it);
        }
    }
    cout<<"\n";
    sort(arr1.begin(), arr1.end());
    cout<<n<<"th smallest number is: "<<arr1[n-1];

    return 0;
}