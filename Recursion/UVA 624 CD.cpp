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


vector<string> v;

void gen(string &s,ll open,ll close){
	if(open == 0 && close == 0){
		v.pb(s);
		return ;
	}
	 if(open>0){
		s.pb('(');
		gen(s,open-1,close);
		s.pop_back();
	}
	 if(close > 0 && open<close){
		s.pb( ')' );
		gen(s,open,close-1);
		s.pop_back();
	}
}

int main()
{
	
	ll n;
	cin >> n;
	string s="";
	ll open=n,close=n;
	gen(s,open,close);
	for(auto &val: v){
		cout << val << endl;
	}
	
}