#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
#define tolow(s) transform(all(s), s.begin(), ::tolower);
#define len length()
#define nl "\n"
#define sz size()
#define mkp make_pair
const int inf = 2e9 + 1e8;
const int MOD = 1e9+7;

ll n,ans = 0;
void solve(){
	cin>>n;
	vector<int> a(n);
	asc(i,n) cin>>a[i];
	for(int i = 1; i < n-1; i++){
		ans += ((a[i-1] > a[i] && a[i] < a[i+1]) || (a[i-1] < a[i] && a[i] > a[i+1]));
	}
	cout<<ans<<nl;
}
int main(){
    LightningSpeed
    solve();
    return 0;
}