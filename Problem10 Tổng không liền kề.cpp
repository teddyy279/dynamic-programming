#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    long long F[n + 1];
    F[0] = 0;
    F[1] = a[1];
    for(int i = 2; i <= n; i++){
           F[i] = max(F[i - 2] + a[i], F[i - 1]);
    }
    cout << F[n];
}