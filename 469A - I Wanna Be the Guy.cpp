#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    set<int> a;
    cin >> n;
  
    int x,y,p,q;
    cin >> p;
    while(p--){
    	cin >> x;
    	a.insert(x);
    }
    cin >> q;
    while(q--)
    {
    	cin >> y;
    	a.insert(y);
    }
   
    
    if(n <= a.size()) { 
    	cout << "I become the guy." << endl ;
    }
    else if(n!= a.size()){
    	cout << "Oh, my keyboard!" << endl ;
    }
 
}