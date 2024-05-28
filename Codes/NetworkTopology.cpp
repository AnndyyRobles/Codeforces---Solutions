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

int n,m,x,y, a[100010];

bool is_bus(){
	int one = 0, two = 0;
	asc1(i,n){
		if(a[i] == 1) one++;
		if(a[i] == 2) two++;
	}
	return one == 2 && two == n-2;
}
bool is_star(){
	int node = 0;
	asc1(i,n){
		if(a[i] == 1) node++;
	}
	return node == n-1;
}
bool is_ring(){
	asc1(i,n){
		if(a[i] != 2){
			return false;
		}
	}
	return true;
}

int main() {
	LightningSpeed
	cin>>n>>m;
	asc(i,m){
		cin>>x>>y;
		a[x]++; a[y]++;
	}
	if(is_bus()) cout<<"bus topology"<<nl;
	else if(is_star()) cout<<"star topology"<<nl;
	else if(is_ring()) cout<<"ring topology"<<nl;
	else cout<<"unknown topology"<<nl;
	return 0;
}



	
 