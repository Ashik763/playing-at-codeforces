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

bool prime(ll n,ll i){
	if(sqrt(n)< i)return false;
	if(n%i==0){
		// cout << "prime" << endl;
		return true;
	}
	prime(n,i+1);
	
}

int main()
{
	ll n;
	cin >> n;
	if(n==1){
		cout << "Not prime " << endl;
		return 0  ;
	}
	if(prime(n,2)){
		cout << "not prime" << endl;
	}
	else cout << "prime" << endl;
}