#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back




int main()
{
  ll t;
  cin >> t;
 
  while(t--){
    ll n;
    cin >> n;
    int arr[n];

  bool odd=false;
     ll sum=0;
    ll count = 0;
    for(int i=0;i<n;i++){
      cin >> arr[i];
      if(arr[i]%2 != 0){
        odd=true;
      }
      else{
        count++;
        sum=sum+arr[i];
      }

    }
    //ll sum = accumulate(arr,arr+n,0ll);
    if(odd==true ){
      cout << count << endl;
      
    }
    else{
     
      ll cn;
      ll prev;
      prev=INT_MAX;
      for(int i=0;i<n;i++){
        cn = 0;
        while(i<n && arr[i]%2==0){
          arr[i]= arr[i]/2;
          cn++;
         

        }
        if(prev>cn){
          prev=cn; 
          if(prev==1)break;
        }

      }
    
     
    cout << prev+count-1 << endl;


    }
    

  }

}