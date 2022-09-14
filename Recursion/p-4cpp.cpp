// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr)  
#define rv reverse(v.begin(),v.end())
#define mod 1000000009

ll polySum(ll i,ll x,ll n,ll sum,ll a){
	
	if(i>=n)return sum;
	
	sum+=x;
	
	
		
	
	
	// cout << sum << endl;
	polySum(i+1,x*a,n,sum,a);
}
	

int main()
{
	// boost;
	ll x,n;
	cin >> x >> n;
	ll a =x;
	ll sum=0;
	cout << polySum(1,pow(x,1),n,sum,a)+1 << endl;
	
	
	

}