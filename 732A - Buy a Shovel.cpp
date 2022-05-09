#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int k,r;
	cin >> k >> r;
	int i=1;
	while((k*i)%10 != r && (k*i)%10 !=0){
		i++;
	}
	cout << i;



}