#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

int main()
{
	ll x1,x2,x3,x4;
	cin >> x1 >> x2 >> x3 >> x4;

	vector<int> v;
	v.push_back(x1);
	v.pb(x2);
	v.pb(x3);
	v.pb(x4);
	sort(v.begin(),v.end());
	ll sm = v[3] - v[2];
	ll md = v[1] - sm;
	ll lg = v[3] -sm-md;

	cout << lg << " "<< md<< " " << sm ;






}