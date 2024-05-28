#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define all(v) v.begin(),v.end()
#define nl "\n"
const int inf = 2e9 + 1e8;
const int MOD = 1e9+7;


int n,k;
bool possibleCut(vector<double>& ropes, double length, int k){
	int cnt = 0;
	for(double rope : ropes){
		cnt += int(rope / length);
	}
	return cnt >= k;
}

void solve(){
	cin >> n >> k;
	vector<double> ropes(n);
	for(int i = 0; i < n; i++){
		cin >> ropes[i];
	}
	double low = 0, high = *max_element(all(ropes));
	double ans = 0, e = 1e-9;
	// ?????? s????? ??????????????
	while(high - low > e){
		double middle = low + (high - low) / 2;
		if(possibleCut(ropes, middle, k)){
			ans = middle;
			low = middle;
		}else{
			high = middle;
		}
	}
	cout << setprecision(20);
	cout << ans << nl;
}

int main(){
	LightningSpeed
	solve();
	return 0;
}
