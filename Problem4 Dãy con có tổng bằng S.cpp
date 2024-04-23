#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    int a[n + 1];
    int F[n + 1][s + 1];
    memset(F, 0, sizeof(F));
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        F[i][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            if(j >= a[i]){
               F[i][j] = F[i - 1][j - a[i]] || F[i - 1][j];
            }
            else F[i][j] = F[i - 1][j];
        }
    }
    cout << F[n][s];
}