#include<bits/stdc++.h>

using namespace std;

char a[1001][1001];
int F[1001][1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int m = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    F[0][1] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == '.'){
                F[i][j] = F[i - 1][j] + F[i][j - 1];
            }
            else F[i][j] = 0;
        }
    }
    cout << F[n][n];
}