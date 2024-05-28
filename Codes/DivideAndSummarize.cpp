#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define all(v) v.begin(),v.end()
#define nl "\n"

void bynaryCalc(vector<ll> &a, ll l, ll r, set<ll> &s){
	if(a[l] == a[r]){
		s.insert(a[l] * (r - l + 1));
		return;
	}
	ll middle = (a[l] + a[r]) / 2;
	ll ptr = l;
	ll sum = a[l];
	
	for(ll i = l + 1; i <= r; i++){
		if(a[i] <= middle){
			ptr = i;
		}
		sum += a[i];
	}
	s.insert(sum);
	bynaryCalc(a, l, ptr, s);
	bynaryCalc(a, ptr + 1, r, s);
}

void solve(){
	ll n, q; cin >> n >> q;
	vector<ll> a(n);
	set<ll> s;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	sort(all(a));
	bynaryCalc(a, 0, n - 1, s);
	while(q--){
		ll qq; cin >> qq;
		cout << (s.find(qq) != s.end() ? "Yes" : "No") << nl;
	}
}

int main(){
	LightningSpeed
	ll t; cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}