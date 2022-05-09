#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		int count=0;
		ll rem;
		ll r;
		vector<int> v;
		if(n>=10000){
			while(n>0){
				if(n>=10000){
					 r = n/10000;
					v.push_back(r*10000);
					n=n%10000;
					count++;
				}
				else if(n>=1000){
					 r = n/1000;
					v.push_back(r*1000);
					n=n%1000;
					count++;
				
				}
				else if(n>=100){
						 r = n/100;
					v.push_back(r*100);
					n=n%100;
					count++;
				}
				else if(n>=10){
					 r = n/10;
					v.push_back(r*10);
					n=n%10;
					count++;
				}
				else if(n>0) {
					
					v.push_back(n);

					 n=n/10;
					count++;
				}
			}
		}
		else if(n>=1000){
			while(n>0){
			 if(n>=1000){
					 r = n/1000;
					v.push_back(r*1000);
					n=n%1000;
					count++;
				
				}
				else if(n>=100){
						 r = n/100;
					v.push_back(r*100);
					n=n%100;
					count++;
				}
				else if(n>=10){
					 r = n/10;
					v.push_back(r*10);
					n=n%10;
					count++;
				}
				else if(n>0) {
					 
					v.push_back(n);
					n=n/10;
					
					count++;
				}
			}
		}
		else if(n>=100){
			while(n>0){
			if(n>=100){
						 r = n/100;
					v.push_back(r*100);
					n=n%100;
					count++;
				}
				else if(n>=10){
					 r = n/10;
					v.push_back(r*10);
					n=n%10;
					count++;
				}
				else if(n>0) {
					
					v.push_back(n);
					 n=n/10;
					
					count++;
				}
			}
			
		}
		else if(n>0){
			while(n>0){
			if(n>=10){
					 r = n/10;
					v.push_back(r*10);
					n=n%10;
					count++;
				}
				else if(n>0) {
					
					v.push_back(n);
					 n=n/10;
					count++;
				}
			}
		}
		cout << count << endl;

		for(int &value : v)
		{
			cout << value << " ";
	   }
	   cout << endl;
	}

}