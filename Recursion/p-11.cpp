// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
#define mod 1000000009



int main()
{
	
	ll n;
	
	while(scanf("%lld",&n)==1) {
		ll a;
		cin >> a;
		ll arr[a];
		for(ll i=0;i<a;i++){
			cin >> arr[i];
		}
		ll m = 0 ;
		vector<ll> v;
		ll index;
		for(ll i=0;i<= (1 << a) ;i++) {
			ll sum=0;
			for(ll j=0;j<=30;j++) {
				if((i >> j) & 1 ) {
					// v.pb(arr[j]);
					
					sum=sum+ arr[j];
					if(sum==n || sum>n){
						break;
					}
				}
			}
			
			if(sum==n) {
				index = i;
				m = sum;
				break;
			}
			else if(sum<=n){
				if(sum>m){
					index =i;
				}
				m = max(sum,m);
				
				
			}
		}
		for(ll j=0;j<=30;j++){
			if((index >> j) & 1 ) {
					cout << arr[j] << ' ';
				}
		}
		cout <<"sum:"<< m << endl;
		
	}
	
	
}