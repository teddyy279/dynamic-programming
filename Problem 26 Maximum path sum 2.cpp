#include<bits/stdc++.h>

using namespace std;

int F[505][505];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            F[i][j] = max({F[i - 1][j - 1], F[i - 1][j], F[i - 1][j + 1]}) + a[i][j];
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, F[n][i]);
    }
    cout << res;
}
