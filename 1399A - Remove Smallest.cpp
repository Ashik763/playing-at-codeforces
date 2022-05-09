#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int t;
	cin >> t ;
	while(t--){
start:
		int n,a=0;
		cin >> n;
		int arr[n];
		for(int i =0 ;i<n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
			if(n==2 && arr[0]+1 < arr[1]) {
				cout << "NO" << endl;

				a++;
				
			}
		for(int i=1;i<n-1;i++){
			// cout << n << " "<< arr[1] << endl;
		
			   if(arr[i-1]+1 < arr[i] || arr[i+1] > arr[i]+1){
				cout << "NO" << endl;
				a++;
				break;
			}
		}
		if(a==0) cout << "YES" << endl;


}

}