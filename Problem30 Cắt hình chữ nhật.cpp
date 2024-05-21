#include <bits/stdc++.h>
using namespace std;

int n, m;
int F[505][505];

int tinh(int n, int m){
    if(n == m) return 0;
    if(F[n][m] != 0) return F[n][m];
    int res = 1e9;
    for(int i = 1; i <= m - 1; i++){
        res = min(res, tinh(n, i) + tinh(n, m - i) + 1);
    }
    for(int i = 1; i <= n - 1; i++){
        res = min(res, tinh(m, i) + tinh(n - i, m) + 1);
    }
    return F[n][m] = res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    cout << tinh(n, m);
}