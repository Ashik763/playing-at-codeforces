// "To live is to suffer, to survive is to find some meaning in the suffering."
#include<bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
#define mod 1000000009

int main() {
    boost;
    

    ll n;
    cin >> n;
    double sum = 0;
    for(ll i=1;i<=n;i++){
    	sum = sum + log10(i);
    }
    cout << (int)( pow(10,(sum-(int)sum))*pow(10,4)); 
   

}