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

ll fact(ll n,ll r){
	if(n==1)return r;
	r = r*n;
	fact(n-1,r);
	
}

int main()
{
	ll n;
	cin >> n;
	ll r=1;
	cout << fact(n,r);
}