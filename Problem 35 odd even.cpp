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
    map<int, int> mp;
    int t = 0;
    int F[n + 1]; // lưu lẻ trừ chẵn
    mp[0] = 1; // lẻ trừ chẵn = 0 luôn đúng nên tính luôn nó là 1 mảng đối xứng
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 0) t++; // hoặc F[i] = F[i - 1] + 1 (lẻ)
        else t--; // hoặc F[i] = F[i - 1] + 1(chẵn)
        F[i] = t;  // làm c2 thì bỏ dòng này
        cnt += mp[F[i]];
        mp[F[i]]++;
    }
    cout << cnt;
}
