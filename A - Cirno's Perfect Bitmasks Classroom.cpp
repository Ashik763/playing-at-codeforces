#include<bits/stdc++.h>
using namespace std;

#define ll int64_t
#define pb push_back




int main()
{
  ll t;
  cin >> t;
  while(t--){
    ll x;
    cin >> x;
    bitset<32> s = x;
    // cout << s << endl;
    ll count;
    if(s[0]==0){
      count = 0;
      for(int i=0;i<32;i++){
        if(s[i]==1){
          count++;
        }


    }
    if(count > 1){
      bitset<32> s2;
      for(int i=0;i<32;i++){
        if(s[i]==1){
          s2[i]=1;
          break;

        }
        else{
          s2[i]=0;
        }

      }
      cout << s2.to_ulong() << endl;
    }
    else{
      cout << x+1 << endl;
    }

    }

    else{
      if(x>1){
        cout << 1 << endl;

      }
      else{
        cout << 3 << endl;
      }

    }
    

  }

}