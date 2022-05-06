#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,t,n;
   cin >> t;
    while(t--){
        cin >> n;
        if(n<3){
            cout << 0 << endl;
        }
        else if(n%2==0){
            j=n/2 + 1;
            cout << n-j << endl;
        }
        else {
            j=ceil(n/2.0);

        cout << n-j << endl;
        }


    }
    return 0;
}
