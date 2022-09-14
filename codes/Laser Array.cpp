// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
// const int N = 1e5+10;



int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll n,m,sx,sy,d;
		cin >> n >> m >> sx >> sy >> d;
		if((sx-d>1 && sy+d  < m) || (sy-d> 1 && sx+d < n)){
			cout << abs(n-1)+abs(m-1) << endl;
		}
		else cout << -1 << endl;
		
	}
   
}
