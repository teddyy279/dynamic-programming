#include<bits/stdc++.h>

using namespace std;

int F[505][505];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n  + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            F[i][j] = max({F[i - 1][j], F[i - 1][j - 1], F[i][j - 1]}) + a[i][j];
        }
    }
    cout << F[n][m];
}
