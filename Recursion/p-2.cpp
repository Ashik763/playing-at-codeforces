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

ll removeOdd(ll i,ll n, ll arr[]){
	if(i==n)return 0 ;
	if(arr[i]%2==0)cout << arr[i] << ' ';
	removeOdd(i+1,n,arr);
}

int main()
{
	
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	removeOdd(0,n,arr);
}