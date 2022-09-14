// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
	
	bool c(pair<ll,ll> a,pair<ll,ll> b){
		if(a.first != b.first){
			// if(a.first > b.first)	return false;
			// return true;
			return (a.first < b.first)	;
		}
		else{
			if(a.second > b.second)return a.second > b.second;
			// return true;
			
			
		}
		
	}

int main()
{
    
    ll t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	vector < pair<ll , ll> > v;
    	for(ll i =0; i < n; i++){
    		ll a,b;
    		scanf("%d %d",&a,&b);
    		v.pb({a,b});
    	}
    	// sort(v.begin(),v.end());
    	sort(v.begin(),v.end(),c);
    	for(auto val: v){
    		cout << val.first << ' ' << val.second << endl;;
    	}
    }
}