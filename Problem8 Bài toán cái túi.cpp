#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    int n, V;
    cin >> n >> V;
    int w[n + 1], c[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> w[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }
    F[0][0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= V; j++){
            if(j >= w[i]){
            F[i][j] = max(F[i - 1][j - w[i]] + c[i], F[i - 1][j]);
            }
            else F[i][j] = F[i - 1][j];
        }
    }
    cout << F[n][V];
}

