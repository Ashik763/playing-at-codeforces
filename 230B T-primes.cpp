#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   long long int n;
   cin >> n;
   while(n--)
   {
	   	long long int x;
	   	cin >> x;
	   	long long int a = sqrt(x);
	   	if(x<4) cout << "NO" << endl;
 
	   	else if(x == 4) cout << "YES" << endl;
	    else if(a*a ==x ) {
	    	long long int b = sqrt(a)+1;
	    	long long int i=2;
	    	bool prime = false;
	    	while(b>=i){
	    		if(a%i==0){
	    			cout << "NO" << endl;
	    			prime = true;
	    			break;
	    		}
	    		i++;
	    	}
	    	if(prime == false){
	    		cout << "YES" << endl;
	    	}
	    }
	    else {
	    	cout << "NO" << endl;
	    }
   
   	
   }
 
}
 
 