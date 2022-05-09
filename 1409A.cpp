#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a,b;
		cin >> a >> b;
		
		
			if(abs(a-b)%10==0)cout << abs(a-b)/10 << endl;
			else cout << ((abs(a-b)/10)+1)<< endl;
	
		
		
	}


	return 0;


}

