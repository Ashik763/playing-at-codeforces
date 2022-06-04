#include<bits/stdc++.h>
using namespace std;

#define ll int64_t
#define pb push_back



int main()
{
  ll a,b,x,y;
  cin >> a >> b >> x >> y;
  ll mini = __gcd(x,y);
  // // cout << mini;
  // ll lim = sqrt(mini);
  // // while(x%mini !=0  || y % mini!= 0  && mini >=sqrt(lim) ){
  // //   mini--;
  // // }
  x=x/mini;
  y= y/mini;
  cout << min(a/x,b/y) << endl;

}