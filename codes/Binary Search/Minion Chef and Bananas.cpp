// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())

	ll check(ll mid,ll arr[],ll n){
		//ll res = 0;
		ll sum = 0;
		
		for(ll i=0;i<n;i++){
			sum = sum + (arr[i]/mid);
			if( arr[i]% mid != 0 )sum++;
		}
		return sum;
		
	}


int main()
{
	 boost ;
	 
	 ll t;
	 cin >> t;
	 while(t--){
		ll n,h;
		cin >> n >> h;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		
		ll l=1;
		ll r =  1e9;
		
		ll ans ;
		
		while(l<=r) {
		ll	mid = (l+r)/2;
			ll che = check(mid,arr,n);
			if(che <= h){
				ans = mid;
				r=mid-1;
				
				
			}
			else{
				l = mid+1;
			}
		}
		cout << ans << endl;
	 	
	 }
	

}

