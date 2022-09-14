// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())


ll ans ;
bool check(ll mid,ll k,ll x,ll total){
	if(mid<=k){
		ll t = (mid*(mid-1))/2;
		if(t<x){
			ans = t;
			return true;
		}
		else return false;
		
	}
	else{
		
		ll mid2 = (2*k-1)-mid+1;
		ll t = total-( (mid2*(mid2+1))/2);
		if(t<x){
			ans = t;
			return true;
		}
		else return false;
		
	}
}

int main()
{
	 boost ;
	 
	 ll t;
	 cin >> t;
	 while(t--){
		ll k,x;
		cin >> k >> x;
		ll total =  k*k;
		ll ans2 =0;
		if(x>=total){
			cout << 2*k - 1 << endl;
		}
		else{
			ll l=1,r = 2*k-1;
			ll mid;
			while(l<=r){
				 mid = (l+r)/2;
				if(check(mid,k,x,total) == true){
				if(ans<x)	ans2 =mid;
					l = mid+1;
				}
				else {
					r=mid-1;
				}
			}
			
			cout << ans2<< endl;	
		}
	 	
	 }
	

}

