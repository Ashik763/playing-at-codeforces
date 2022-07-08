#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"



int main()
{
  ll n,m;
  cin >> n >> m;
  ll arr[m];
  map<ll ,ll > m1;
  for(ll i=0;i<m;i++){
    cin >> arr[i];
    m1[arr[i]]++;
    

  }
  // cout << "HE";
  vector<int> v;
  for(auto &val:m1){
    v.pb(val.second);
    // cout << val.second ;
  }
  ll res = m/n;
  if(res==0){
    cout << 0 << endl;
    fuck_off;
  }
  sort(v.begin(),v.end());
 
  ll size = v.size();
  
  ll count;
  ll i;
  // cout << v[size-2] << endl;
  for( i=res;i>=0;i--){
    count=0;
    for(int j=size-1;j>=0;j--){
      if(count >=n) break;
      if(v[j]/i > 0 ){
        ll people = v[j]/i;
        count=count+people;
      }
      else{
        break;
      }


       
    }
      if(count >=n) break;

  }

  cout << i << endl;

  

  fuck_off;

}

