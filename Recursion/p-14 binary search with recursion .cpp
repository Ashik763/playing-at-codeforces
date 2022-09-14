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

ll remainder(ll n){
	if(n/10 == 0){
		// cout << n ;
		return n;
	}
	cout << n%10;
	 remainder(n/10);
	
}
int main()
{
	ll n;
	cin >> n;
	
  cout <<   remainder(n) << endl;
	
	
}