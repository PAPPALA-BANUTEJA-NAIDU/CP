#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
#define int ll
 
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define pb push_back
#define eb emplace_back
#define a first
#define b second
#define bg begin()
#define ed end()
#define all(x) x.bg,x.ed
#define si(x) int(x.size())

template<class t,class u> bool chmax(t&a,u b){if(a<b){a=b;return true;}else return false;}
template<class t,class u> bool chmin(t&a,u b){if(b<a){a=b;return true;}else return false;}
 
template<class t> using vc=vector<t>;
template<class t> using vvc=vc<vc<t>>;
 
using pi=pair<int,int>;
using vi=vc<int>;
 
#define mp make_pair
#define mt make_tuple
#define one(x) memset(x,-1,sizeof(x))
#define zero(x) memset(x,0,sizeof(x))

using uint=unsigned;
using ull=unsigned long long;

 
void slv(){
	int n, x;
	cin >> n;
	vector<int> v(n);
	rep(x, n) cin >> v[x];
	sort(all(v));
	ll r = 0;
	ll b = v[0];
	bool win = 0;
	for(int i = 1, j = n-1; ; i++, j--) {
		if(r > b) {
			win = 1;
			break;
		}
		if(i >= j)
			break;
		r += v[j];
		b += v[i];
	}
	cout << (win ? "YES" : "NO") << '\n';
}
 
signed main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout<<fixed<<setprecision(20);

	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   
	#endif
	
	int t;cin>>t;rep(_,t)
	slv();
}