#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n;
	multiset<pair<int, int>> ms;
	multiset<int> start, end;
	for(int i = 0; i < n; i++){
		char c; int l,r; cin>>c>>l>>r;
		if(c == '+'){
			ms.insert({l, r});
            start.insert(l); 
			end.insert(r);
		}else{
			ms.erase(ms.find({l, r}));
            start.erase(start.find(l)); 
			end.erase(end.find(r));
		}
		if (!(!start.empty() && !end.empty())) {
            cout << "NO" << endl;
            continue;
        }
        auto st = --start.end(), nd = end.begin();
        if (*st > *nd) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
	}
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}