// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr)  
#define rv reverse(v.begin(),v.end())
#define mod 1000000009




ll inorder(ll n){
	if(n<3){
		cout << n << ' ';
		return 0;
	}
	inorder(n-2);
	cout << n << ' ';
	inorder(n-1);
}
ll preorder(ll n){
	if(n<3){
		cout << n << ' ';
		return 0;
	}
	
	cout << n << ' ';
	preorder(n-2);
	preorder(n-1);
	
	
}
ll postorder(ll n){
	if(n<3){
		cout << n << ' ';
		return 0;
	}
	postorder(n-2);
	postorder(n-1);
	cout << n << ' ';
	
}

int main()
{
	ll n;
	cin >> n;
	cout << "Inorder: ";
	inorder(n);
	cout << '\n';
	cout << "Preorder: ";
	preorder(n);
	cout << '\n';
	cout << "Postorder: ";
	postorder(n);
	cout << '\n';
	
	
}
//recursion shikkha gechi!!!!!!!!!!!