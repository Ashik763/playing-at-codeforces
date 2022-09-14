// Q: Given an array ,find out how many subsequence or subset we can get 
//    where the summation of the elements of a subset/subsequence is equat to s.

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
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
    	cin >> arr[i];
    }
    ll s;
    cin >> s;
    ll ans = 0;
    for(ll i=0; i < ( 1 << n ) ; i++){
    	ll sum = 0;
    	for(ll j=0;j<n;j++) {
    		if((i >> j) & 1){
    			sum=sum+arr[j];
    		}
    	}
    	if(sum==s) {
    		ans++;
    	}
    	
    }
    cout << ans << endl;
    
}