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
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		map<string,ll> first;
		map<string,ll> second,third;
		ll fi=0,se=0,th=0;
		for(ll i=0;i<n;i++) {
			string s;
			cin >> s;
			first[s]++;
		}
		for(ll i=0;i<n;i++) {
			string s;
			cin >> s;
			second[s]++;
		}
		for(ll i=0;i<n;i++){
			string s;
			cin >> s;
			third[s]++;
		}
		for(auto val: first) {
			if(first[val.first]>0 && second[val.first]>0 && third[val.first]>0){
				first[val.first]--;
				second[val.first]--;
				third[val.first]--;
			}
			else if(second[val.first]>0 && third[val.first]<=0){
				fi++;
				se++;
				// auto it = first.find(val);
				// auto it2 = second.find(val);
				first[val.first]--;
				second[val.first]--;
				
				
			}
			else if(second[val.first]==0 && third[val.first]>0){
				fi++;
				th++;
					first[val.first]--;
					third[val.first]--;
				
			}
			else if(second[val.first]==0 && third[val.first]==0){
				fi=fi+3;
				first[val.first]--;
				
				
			}
		}
		for(auto val: second) {
			if( second[val.first]>0 && third[val.first]>0){
				se++;
				th++;
				second[val.first]--;
				third[val.first]--;
				
				
			}
			
			else if(second[val.first]>0) {
				se = se+3;
				second[val.first]--;
				
				
			}
		}
		for(auto val:third) {
			if(third[val.first]>0){
				th = th+3;
				// third[val.first]--;
			}
		}
		
		cout << fi<< ' ' << se << ' ' << th << endl;
		
		
		
	}
    
}