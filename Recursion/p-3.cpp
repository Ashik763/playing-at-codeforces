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

ll poly(ll i,ll n){
	
	if(i>=n)return 0;
	if(i==0)cout << 1 ;
	else if(i==1)cout << "x" ;
	else {
		cout << "x^"<< i ;
	}
	if(i+1 <n )cout << " + ";
	// if()
	
	poly(i+1,n);
}
	

int main()
{
	
	ll n;
	cin >> n;
	// cout << 1 << " + ";
	poly(0,n);

}