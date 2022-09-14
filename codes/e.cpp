#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;
void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<int> v;
    bool paici =false;
    bool odd=false,even = false;
    for(ll i=0;i<n;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
     if(n==1){
        if(k==v[0]){
            cout << "POSSIBLE" << endl;
            return ;

        }
        else{
            cout << "IMPOSSIBLE" << endl;
            return ;
        }

    }
    else if(k > v[n-1]){
        cout << "IMPOSSIBLE" << endl;
        return ;
    }
    else{
        if(binary_search(v.begin(),v.end(),k)){
            cout << "POSSIBLE" << endl;
            return ;
        }



            //ll diff = v[1]-v[0];
        for(ll i=0;i<n;i++) {
            if(v[i]%v[0]!=0){
               paici = true;
               
                // return;
            }
            if(v[i]%2!=0){
            	odd = true;
            }

        }
    }
    if(paici) {
    	if(k%2!=0 && !odd ){
    		cout << "IMPOSSIBLE" << endl;
    	}
    	else cout << "POSSIBLE" << endl;
    }
   	else {
   		if(k%v[0]==0)cout << "POSSIBLE" << endl;
   		else cout << "IMPOSSIBLE" << endl;
   	}
    


//v[i+1]-v[i]!= diff ||


}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

//ll t,i,j;
//cin>>t;
//while(t--)
//{

solve();

//}
get_out;
}