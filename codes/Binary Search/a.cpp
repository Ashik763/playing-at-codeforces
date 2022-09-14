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
    ll t;
    cin >> t;
   while(t--) {
        ll n;
        cin >> n;
        ll arr[n+1];
        ll alice =0,car =0,s=0;
        
       // ll one =0;
       // ll zero = 0;
        for(ll i=1;i<=n;i++){
        	cin >> arr[i];
        	alice += arr[i]==0;
        	car+= arr[i]==1;
        	
        	
        }
        for(ll i=1;i<=n;i++){
        	if(i==1){
        		s+=(arr[1] ==arr[n]);
        	}
        	else {
        		s+= arr[i]==arr[i-1];
        	}
        }
        
        s-= abs(alice-car);
        cout << ((s%4==0) ? "Bob":"Alice") << endl;
        // ll mini = min(one,zero);
        
        
        
    }
}