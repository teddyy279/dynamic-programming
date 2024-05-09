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
	int F[n + 1];
	for(int i = 1; i <= n; i++){
		F[i] = a[i];
		for(int j = 1; j < i; j++){
			if(a[i] > a[j]){
				F[i] = max(F[i], F[j] + a[i]);
			}
		}
	}
	cout << *max_element(F, F + n + 1);
}