// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())

ll arr[10][1000000+5];
const ll N = 1e6+10;
ll dp[N];
ll a;
bool check(int l,int k){
	if(dp[l]!=0){
		// cout << "HELL" << endl;
		if(dp[l]==k)return true;
		else return false;
	}
	
	ll sum = 1;
	while(l!=0) {
		ll r = l%10;
		
		if(r!=0)sum*=r;
		l = l/10;
		
	}
	if(sum >=10){
		
		check(sum,k);
	}
	else if(sum==k){
		// cout << "sum" << endl;
		dp[a]= sum;
		return true;
		
		}
	else {
		dp[a]=sum;
		
		return false;
		
		}
}

int main()
{
	for(ll i=0;i<10;i++){
		for(ll j=0;j<100000;j++){
			
		}
	}
    
    ll t;
    cin >> t;
    while(t--){
    	ll l,r,k;
    	cin >> l >> r >> k;
    	ll ct = 0;
    	while(l<=r) {
    		a = l;
    		if(dp[a]==0){
    			
	    		if( check(l,k)){
	    			
	    			ct++;
	    			
	    		}
    		}
    		else if(dp[a]==k){
    			ct++;
    		}
    		
    		
    		l++;
    		
    	}
    	cout << ct << endl;
    }
}