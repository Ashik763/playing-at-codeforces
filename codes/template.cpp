// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())

int main()
{
    ll a,b;
    cin >> a >> b;
    ll r = min(a,b);
    cout << min(a,b) << ' ' << ( max(a,b) - r) /2 << endl;
}