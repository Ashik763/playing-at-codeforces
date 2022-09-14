// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())

bool check(ll arr[],ll n,ll c,ll dis){
	ll pos = arr[0];
	ll ct =1;
	for(ll i=1;i<n;i++){
		if(arr[i]-pos>=dis){
			ct++;
			pos = arr[i]; 
		}
		if(ct==c){
			return true;
		}
	}
	return false;
	
	
}

int main()
{
	 boost ;
	 
	 ll t;
	 cin >> t;
	 while(t--){
	 	ll n,c;
	 	cin >> n >> c;
	 	ll arr[n];
	 	for(ll i=0;i<n;i++){
	 		cin >> arr[i];
	 	}
	 	sort(arr,arr+n);
	 	ll l = arr[0],r=arr[n-1]-arr[0];
	 	ll ans = 0;
	 	while(l<=r){
	 		ll mid = (l+r)/2;
	 		if(check(arr,n,c,mid)){
	 			ans = mid;
	 			l = mid+1;
	 			
	 		}
	 		else{
	 			r=mid-1;
	 		}
	 		
	 	}
	 	cout << ans << endl;
	 	
	 }
	

}

