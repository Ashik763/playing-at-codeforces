#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back



int main()
{
  ll n;
  cin >> n;
  string s;
  cin >> s;
  ll vuj=0,koti = 0;
  ll i=0;

  bool up = false;
  ll count=0;
  while(n--){
    if(s[i] == 'U'){

      if(vuj==koti && vuj!=0 && up==true){
        count++;
     
      }
      koti++;
      up=true;


    }
    else{
       if(vuj==koti && vuj!=0 && up==false){
        count++;
        
      }
      vuj++;
      up=false;
    }
    i++;
  }
  cout << count << endl;
}