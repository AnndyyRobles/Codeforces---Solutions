#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lli long long int
#define ll long long 
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define asc(i,n) for(int i=0;i<n;i++)
#define asc1(i,n) for(int i=1;i<=n;i++)
#define ascc(i,a,n) for(int i = a;i<n;i++)
#define ascc1(i,a,n) for(int i = a;i<=n;i++)
#define desc(i,n) for(int i = n; i >= 0; i--)
#define descc(i,n,a) for(int i = n; i >= a; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound 
#define p_vec(x)      \
	for (auto &i : x)      \
		cout << i << ' '; \
	cout << endl;
#define tolow(s) transform(all(s), s.begin(), ::tolower);
#define len length()
#define nl "\n"
//define sz size()
#define mkp make_pair
const int inf = 2e9 + 1e8;
const int MOD = 1e9+7;

const int MAXN = 3e4+1;
vector<pair<ll,ll>> vp(MAXN);
ll ans = inf,n,nn;

void solve(){
	cin>>n;
	asc(i,n){
		cin>>nn; vp[i].ff = nn;
	}
	asc(i,n){
		cin>>nn; vp[i].ss = nn;
	}
	ascc(i,0,n){
		ll val1 = inf, val2 = inf;
		ascc(j,0,i){
			if(vp[i].ff > vp[j].ff) val1 = min(val1, vp[j].ss);
		}
		ascc(j,i+1,n){
			if(vp[j].ff > vp[i].ff) val2 = min(val2, vp[j].ss);
		}
		ans = min(ans, val1 + val2 + vp[i].ss);
	}
	cout<<(ans == inf? -1 : ans)<<nl;
}

int main(){
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}









 