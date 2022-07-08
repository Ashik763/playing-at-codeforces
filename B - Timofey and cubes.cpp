#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back



int main()
{
  ll n;
  cin >> n;
  ll arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];

  }
  for(int i=0;i<n/2;i++){
    if((i+1)%2 != 0){
      swap(arr[i],arr[n-1 -i]);
     
    }
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }

}