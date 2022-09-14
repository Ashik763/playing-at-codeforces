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
    ll t;
    cin >> t;
    while(t--){
    	ll n,k;
    	cin >> n >> k;
    	ll arr[n];
    	for(ll i=0;i<n;i++){
    		cin >> arr[i];
    	}
    	sort(arr,arr+n);
    	ll mid;
    	ll sum;
    	int ans = 0;
    	ll l=1,r = 1e9;
    	ll ct;
    	ll max = 0;
    	
    	while(l<=r) {
    		mid=l+(r-l)/2;
    		sum =0;
    		ct = 0;
    		for(ll i=0;i<n;i++){
    			sum=sum+(arr[i]/mid);
    			ct = ct+(arr[i]/mid);
    			if(ct>=k)break;
    				
    			
    		}
    		if(ct<k){
    			r=mid-1;
    		}
    		
    		else{
    			
    			ans = mid;
    			max = sum;
    			l = mid+1;
    		}
    		
    		
    		
    		
    	}
    	cout << ans << endl;
    }
}