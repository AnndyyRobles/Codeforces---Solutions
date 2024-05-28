#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define all(v) v.begin(),v.end()
#define nl "\n"

void solve(){
	string s; cin >> s;
	ll slen = s.size();
	ll count = 0;
	ll ans = 0;
	for(ll i = 0; i < slen; i++){
		if(s[i] == '0'){
			ans += (count == 0? 0 : count + 1);
		}else{
			count++;
		}
	}
	cout << ans << nl;
}

int main(){
	LightningSpeed
	ll t; cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}