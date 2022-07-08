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
  ll arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  ll behind = 1;
  ll count =1;
  ll lastIndex=n-1;
  for(int i=n-1;i>0;i--){
    if(i-arr[i]<lastIndex){
      if(i-arr[i]<=0){
        break;
      }
      lastIndex = i-arr[i];

    }
    else if(lastIndex==i && arr[i]==0){
      // cout << i << " H";
      count++;
      lastIndex--;
    }

    }

  cout << count << endl;


}

