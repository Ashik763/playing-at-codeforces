#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int rem = 240-k;
    int i =1;
    int time=5;
    while(rem >= time && n>0){
    	
    	rem = rem-(5*i);
    	   

    	time = 5*(i+1);
    	n--;
    	i++;

    }
    cout << i-1 << endl;

}