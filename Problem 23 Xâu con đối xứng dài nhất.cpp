#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
	int n = s.size();
	s = "0" + s;
	int F[n + 1][n + 1];
	memset(F, false, sizeof(F));
	for(int i = 1; i <= n; i++){
		F[i][i] = true;
	}
	int ans = 1;
	for(int len = 2; len <= n; len++){
		for(int i = 1; i <= n - len + 1; i++){
			int j = i + len - 1;
			if(len == 2){
				F[i][j] = (s[i] == s[j]);
			}
			else{
				F[i][j] = (s[i] == s[j]) && F[i + 1][j - 1];
			}
			if(F[i][j]){
				ans = max(ans, len);
			}
		}
	}
	cout << ans;
}