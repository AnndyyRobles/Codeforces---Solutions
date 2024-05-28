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
#define sz size()
#define mkp make_pair
const int inf = 2e9 + 1e8;
const int MOD = 998244353;

bool prime(ll n){
	if(n<2) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	LightningSpeed
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int differ = 4 * (n-1), x = 1;
		while(!(!prime(x) && prime(differ+x))) x++;
		asc(i,n) asc(j,n) cout<<(i==j? x : 4)<<(j<n-1? " " : "\n");
	}
	return 0;
}
 