#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int,int>> zeroes;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                zeroes.push_back({i,j});
            }
        }
    }
    for(auto x:zeroes){
        for(int i=0;i<matrix[x.first].size();i++){
            matrix[x.first][i]=0;
        }
        for(int i=0;i<matrix.size();i++){
            matrix[i][x.second]=0;
        }
    }
    for(auto x:matrix){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int32_t main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
    setZeroes(matrix);
}
