#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"



int main()
{
  ll t;
  cin  >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    ll tall =0;
    if(k==1){
      // cout << "HE";
      if(n%2==0)cout << (n-2)/2 << endl;
      else cout <<( (n-2)/2) +1 << endl;
    }
    else{
      
      for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]+arr[i+1]){
          tall++;
        }

      }
      cout << tall << endl;
    }

  }
  

}

