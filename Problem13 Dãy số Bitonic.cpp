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
    int F1[n + 1], F2[n + 1];
    for(int i = 1; i <= n; i++){
        F1[i] = a[i];
        for(int j = 1; j < i; j++){
            if(a[i] > a[j]){
                F1[i] = max(F1[i], F1[j] + a[i]);
            }
        }
    }
    for(int i = n; i >= 1; i--){
        F2[i] = a[i];
        for(int j = n; j > i; j--){
            if(a[i] > a[j]){
                F2[i] = max(F2[i], F2[j] + a[i]);
            }
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, F1[i] + F2[i] - a[i]);
    }
    cout << res;
}

