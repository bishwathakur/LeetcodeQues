#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void generate(int numRows) {
    //! 1 <= numRows <= 30
    vector<vector<int>> ans;
    ans={{1}};
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<numRows;i++){
        ans[i][0]=ans[i][numRows-1]=1;
        int j=1;
        while(j<numRows-1){
            ans[i][j]=ans[i][j-1]+ans[i][j+1];
            j++;
        }
    }
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}

int32_t main() {
    
    int n;cin>>n;
    // for(auto x:generate(n)){
    //     for(auto y:x){
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }
    generate(n);
}
