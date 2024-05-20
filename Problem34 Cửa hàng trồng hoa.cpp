#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int F[n + 1], G[n + 1];
    F[0] = 0, G[0] = 0;
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > a[i - 1]){
            F[i] = F[i - 1] + 1;
        }
        else F[i] = 1;
        res = max(res, F[i]);
    }
    for(int i = n; i >= 1; i--){
        if(a[i] < a[i + 1]){
            G[i] = G[i + 1] + 1;
        }
        else G[i] = 1; // không cần phải gán res = max(res, G[i]) vì thực chất 2 F và G cùng tính chất nhau
    }
    for(int i = 2; i <= n - 1; i++){// vị trí 1 và n - 1 không cần xét vì kể cả trong trường hợp không có nó mà dãy từ phần tử tiếp theo vẫn tăng liên tiếp thì k lq    
        if(a[i + 1] > a[i - 1]){
            res = max(res, F[i - 1] + G[i + 1]);
        }
    } 
    cout << res;
}

