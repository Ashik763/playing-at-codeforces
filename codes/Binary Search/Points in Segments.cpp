// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())


int main()
{
	 boost ;
	 
	 ll t;
	 cin >> t;
	 ll j=1;
	 while(t--){
	 	
		ll n,q;
		cin >> n >> q;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		
		cout << "Case "<< j << ':' << endl;
		while(q--){
			ll a,b;
			cin >> a >> b;
			ll l=0,r=n-1;
			ll ct=0;
			auto it=arr,it2=arr;
			while(l<=r){
				ll mid =(l+r)/2;
				if(arr[mid]<a){
					
					l = mid+1;
				}
				else if(arr[mid]>b){
					r=mid-1;
				}
				else{
					ct++;
					
					 it = lower_bound(arr,arr+mid,a);
					 it2 = upper_bound(arr+mid,arr+n,b);
				//	cout << it2-it << "heLL" << endl;
					
				
					break;
					
					
				}
				
			}
			cout << it2-it << endl;
			
		}
		j++;
	 }
	

}

