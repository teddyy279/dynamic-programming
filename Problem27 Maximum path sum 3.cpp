#include<bits/stdc++.h>

using namespace std;

long long F[505][505];

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
        F[0][i] = -1e18;  
        F[n + 1][i] = -1e18;
    }
    for(int i = 1; i <= n; i++){
        F[i][1] = a[i][1];
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            F[j][i] = max({F[j - 1][i - 1], F[j][i - 1], F[j + 1][i - 1]}) + a[j][i];
        }
    }
    long long res = -1e18;
    for(int i = 1; i <= n; i++){
        res = max(res, F[i][n]);
    }
    cout << res;
}
