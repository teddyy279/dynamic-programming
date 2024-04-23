#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

int F[101][1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int coin[n];
    for(int i = 1; i <= n; i++){
        cin >> coin[i];
    }
    for(int i = 1; i <= n; i++){
        F[i][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x; j++){
            if(j >= coin[i]){
            F[i][j] = F[i][j - coin[i]] + F[i - 1][j];
            }
            else F[i][j] = F[i - 1][j];
            F[i][j] %= mod;
        }
    }
    cout << F[n][x];
}

