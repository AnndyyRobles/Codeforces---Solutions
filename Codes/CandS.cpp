#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define all(v) v.begin(),v.end()
#define nl "\n"
const int inf = 2e9 + 1e8;
const int MOD = 1e9+7;
ll a,b;

ll dfs(ll a, ll b){
	ll middle = 1LL << (a - 1);
	if(middle > b){
		return dfs(a - 1, b);
	}
	if(b > middle){
		return dfs(a - 1, b - middle);
	}
	return a;
}
void solve(){
	cin>>a>>b;
	cout<<dfs(a,b)<<nl;
}
int main(){
	LightningSpeed
	solve();
    return 0;
}