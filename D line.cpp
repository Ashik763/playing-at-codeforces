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
	ll t;
	cin >> t;
	for(ll i = 1;i<=t;i++) {
		
			ll a,b,c;
			cin >> a >> b >> c;
			if((a+b+c)%3==0){
				cout << "Case " << i << ": Peaceful" << endl;
			}
			else cout << "Case " << i << ": Fight" << endl;
		
		
		
	}
    
}