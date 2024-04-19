#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    long long F[n + 1];
    memset(F, 0, sizeof(F));
    F[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= min(i, k); j++){
            F[i] += F[i - j];
            F[i] %= mod;
        }
    }
    cout << F[n];
}
