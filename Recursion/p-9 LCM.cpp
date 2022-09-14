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

ll maxi(ll i,ll arr[],ll max,ll n){
	if(i==n)return max;
	if(arr[i]>max){
		max = arr[i];
	}
	return  maxi(i+1,arr,max,n);
}

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	ll max=INT_MIN;
	cout << maxi(0,arr,max,n) << endl;
	
}