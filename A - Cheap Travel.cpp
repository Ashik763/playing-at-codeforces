#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int n,m,a,b;
  cin >> n >> m >> a >> b;
  // double ch = m/b;
  // cout << ch;
  if(a > b/m){


  if(n%m==0){
  	cout << (n/m)*b << endl;
  }
  else{
  	// cout << "REM";
  	int rem= n%m;
  	if(rem*a < b){
  		cout << (rem*a )+(n/m)*b << endl;
  	}
  	else{
  		cout << b+(n/m)*b << endl;
  	}
  }

 }

 else{
 	cout << n*a << endl;
 }
}


