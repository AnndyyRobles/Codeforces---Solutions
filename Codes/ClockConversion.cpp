#include<bits/stdc++.h>
using namespace std;
#define LightningSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define asc(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define ll long long 
#define nl "\n"
const int inf = 2e9 + 1e8;

void solve() {
    string s; cin>>s;
    string s1, s2;
    int h1;
    if(s[0] - '0' == 0){
    	if(s[1] - '0' == 0){
    		h1 = 12;
		}else{
			h1 = s[1] - '0';
		}
	}else{
		s1 = s.substr(0, 2);
		h1 = stoi(s1);
	}
	s1 = s.substr(0, 2);
	s2 = s.substr(3, 2);
	if(s1 == "00"){
		cout<<"12"<<":"<<s2<<" "<<"AM"<<nl;
	}else if(h1 < 12){
		cout<<s<<" "<<"AM"<<nl;;
	}else if(h1 == 12){
		cout<<s<<" "<<"PM"<<nl;;
	}else{
		h1-=12;
		if(h1 > 9){	
			cout<<h1<<":"<<s2<<" "<<"PM"<<nl;
		}else{
			cout<<0<<h1<<":"<<s2<<" "<<"PM"<<nl;	
		}

	}
	
	
}

int main() {
    LightningSpeed
    int t; cin>>t;
    while(t--){
    	solve();
	}
    return 0;
}