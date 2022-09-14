#include<bits/stdc++.h>
#define ll long long int

using namespace std;
const ll N = 1e5 + 5;

ll par[N], siz[N];

void make(ll i){
	par[i] = i;
	siz[i] = 1;
}

ll find(ll i){
	if(par[i] == i) return par[i];
	return par[i] = find(par[i]);
}

void Union(ll u, ll v){
	u = find(u);
	v = find(v);
	if(u != v){
		if(siz[u] < siz[v]){
			swap(u, v);
		}
		par[v] = u;
		siz[u] += siz[v];
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    ll n, m;
    freopen("abc.txt","r",stdin);
    cin >> n >> m;
    
    vector<pair<ll, pair<ll, ll>>> vic;
    
    for(ll i = 0; i < m; i++){
    	ll u, v, w;
    	cin >> u >> v >> w;
    	vic.push_back({w, {u, v}});
    }
    
    sort(vic.begin(), vic.end());
    
    for(ll i = 1; i <= n; i++) make(i);
    
    ll cost = 0;
    cout << "";
    for(auto i : vic){
    	ll w = i.first;
    	ll u = i.second.first;
    	ll v = i.second.second;
    	
    	if(find(u) == find(v)) continue;
    	Union(u, v);
    	cout << u << ' ' << v << '\n';
    	cost += w;
    }    
    cout << cost << '\n';
    
    return 0;
}
