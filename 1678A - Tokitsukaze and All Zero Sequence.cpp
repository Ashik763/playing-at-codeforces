#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int b = 0;
		
		for(int i =0;i<n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int count =0;

		if(arr[0] == 0){
			for(int i = 1;i<n;i++){
				if(arr[i]!= 0)count++;
			}
		}
		
		else{
			
			for(int i =0;i<n-1;i++){
			
			if(arr[i]==arr[i+1]){
				// count=count+2;
				// for(int i = 2;i<n;i++){
				// if(arr[i]!= 0)count++;
				b=1;
				// cout << "achi";
				break;
				}
			}
			if(b==1){
				count = n;
			}
			else{
				count  = n+1;

			}

		  }
		  cout << count << endl;
		}
		

		

	
	
	

	
	
}

