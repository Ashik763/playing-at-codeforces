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

ll gcd(ll a,ll b,ll c){
		if(c<=1)return 1;
		
		if(a%c==0 && b%c==0){
			return c;
		}
		gcd(a,b,c-1);
}

int main()
{
	ll a,b;
	cin >> a >> b;
	ll mini=min(a,b);
	ll r = mini;
	ll maxi = max(a,b);
	cout << gcd(maxi,mini,r) << endl;
	
}