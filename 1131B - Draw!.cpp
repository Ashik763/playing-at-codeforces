#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<pair<int,int> > v;
  v.pb({0,0});
  for(int i=0;i<n;i++){
    ll a,b;
    cin >> a >> b;
    v.pb({a,b});
   
  }
  ll count=0;
  for(int i=0;i<n;i++){
    if( max(v[i].first,v[i].second) <= min( v[i+1].first,v[i+1].second ) ){
      count = count + abs(max(v[i].first,v[i].second)-min(v[i+1].first,v[i+1].second ))+1;
      
     
    }
    if(v[i+1].first < v[i+1].second)
    v[i+1].first++;
else
    v[i+1].second++;
    

  }

  if(count == 1)cout << 1 << endl;
  else{
    cout << count << endl;
  }
 
}

