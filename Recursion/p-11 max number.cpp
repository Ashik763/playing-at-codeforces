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

ll find(ll left,ll right,ll a,ll arr[]){
	ll mid = (left+right)/2;
	if(left> right){
		cout << left<< endl;
		return -1;
	}
    if(a==arr[mid]){
		return mid;
	}
	else if(a >arr[mid]){
		find(mid+1,right,a,arr);
	}
	else if(a<arr[mid]){
		find(left,mid-1,a,arr);
	}
	
}
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	ll q;
	cin >> q;
	while(q--){
		ll a ;
		cin >> a;
		ll left=0,right = n-1;
		if(find(left,right,a,arr)==-1){
			cout << "NOT FOUND" << endl;
		}
		else cout << find(left,right,a,arr) << endl;
	}
	
}