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

ll lcd(ll a,ll b,ll i){
		if((a*i)%b==0){
			return a*i;
		}
		lcd(a,b,i+1);
}

int main()
{
	ll a,b;
	cin >> a >> b;
	ll mini=min(a,b);
	
	ll maxi = max(a,b);
	// ll r = maxi;
	cout << lcd(maxi,mini,1) << endl;
	
}