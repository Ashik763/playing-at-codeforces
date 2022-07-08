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
  ll n,s;
  cin >> n >> s;
  ll arr[n];
  ll sum=0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    sum=sum+arr[i]+0ll;
    // if(sum>=s)break;
  }
  if(sum<s){
    cout << -1 << endl;
  }
  else{
    ll mini = *min_element(arr,arr+n);
    ll sum2=0;
    // while(sum2>=s){
      for(int i=0;i<n;i++){
        sum2=sum2+arr[i]-mini;
        arr[i]=mini;
      }
      // mini=
    // }
      if(sum2>=s){
        cout << mini << endl;
      }
      else{
        // while(mini!=0){
        //   sum2=sum2+n;
        //   mini--;
        //   if(sum2 >=s){
        //     cout << mini << endl;
        //     fuck_off;
        //   }

        // }
        if((s-sum2)%n==0)cout << mini - ((s-sum2)/n) << endl;
        else{
          // cout << "vitore";
          cout <<  mini - ((s-sum2)/n)-1 << endl;
        }
        
      }

  }
  

}

