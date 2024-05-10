#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    int s = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s += a[i];
    }
    int F[s + 1];
    F[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = s; j >= 1; j--){
            if(j >= a[i]){
                F[j] = F[j - a[i]] || F[j];
            }
        }
    }
    for(int i = 0; i <= s; i++){
        if(F[i]) cout << i << " ";
    }
}
