#include "bits/stdc++.h"
#pragma GCC optimize(2)
#pragma GCC optimize(3, "Ofast", "inline")
#define int long long
#define For(i,n) for(int i=0; i<n;i++)
#define FOR(k,i,n) for(int i=k; i<n;i++)
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
using namespace std;
int D,M;
int process(vector<int> row){
    int r=0;
    int i=0,n = row.size();
    For(i,D-1)row.emplace_back(0);
    vector<int>pref(row.size()+1,0);
    For(i,row.size())pref[i+1] = pref[i]+row[i];
    while (i<n){
        bool done  = false;
        for(int t=i;t>=max(0,i-D+1);t--){
            if(pref[t+D]-pref[t]<=M){
                i = t+D;
                done = true;
                break;
            }
        }
        if(!done){
            return -1;
        }
        r++;
    }
    return r;
}
void solve(int _){
    int n,m;cin>>n>>m>>D>>M;
    int grid[n][m];
    For(i,n)For(j,m)cin>>grid[i][j];
    int minProcessing=INT_MAX;
    //bottom right
    int processing=0;
    bool possible=true;
    For(i,n and possible){
        vector<int> row;
        For(k,min(n-i,m)){
            row.emplace_back(grid[i+k][k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    FOR(1,i,m and possible){
        vector<int> row;
        For(k,min(m-i,n)){
            row.emplace_back(grid[k][i+k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    if(possible)minProcessing = min(minProcessing,processing);
    //top right
    processing=0;
    possible=true;
    For(i,n and possible){
        vector<int> row;
        For(k,min(i+1,m)){
            row.emplace_back(grid[i-k][k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    FOR(1,i,m and possible){
        vector<int> row;
        For(k,min(m-i,n)){
            row.emplace_back(grid[n-1-k][i+k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    if(possible)minProcessing = min(minProcessing,processing);
    //top left
    processing=0;
    possible=true;
    For(i,n and possible){
        vector<int> row;
        For(k,min(i+1,m)){
            row.emplace_back(grid[i-k][m-1-k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    FOR(0,i,m-1 and possible){
        vector<int> row;
        For(k,min(i+1,n)){
            row.emplace_back(grid[n-1-k][i-k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    if(possible)minProcessing = min(minProcessing,processing);
    //bottom left
    processing=0;
    possible=true;
    For(i,n and possible){
        vector<int> row;
        For(k,min(n-i,m)){
            row.emplace_back(grid[i+k][m-1-k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    FOR(0,i,m-1 and possible){
        vector<int> row;
        For(k,min(i+1,n)){
            row.emplace_back(grid[k][i-k]);
        }
        int t =process(row);
        if(t==-1)possible = false;
        else processing+=t;
    }
    if(possible)minProcessing = min(minProcessing,processing);
    cout<<(minProcessing==INT_MAX?-1:minProcessing);
}
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie();
        int t=1;
//    cin>>t;
    for(int i = 0; i<t;i++){
        solve(i);
    }
}

