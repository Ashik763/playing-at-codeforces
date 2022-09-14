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
	ll n;
	cin >> n;
	ll arr[n][n];
	memset(arr,0,sizeof(arr));
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}
}