#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,c=0;
    cin >> n;
    c=n/100;
    n=n%100;

    c=c+(n/20);
    n=n%20;

    c=c+(n/10);
    n=n%10;

    c=c+(n/5);
    n=n%5;

    c=c+(n/1);

    cout << c ;



        return 0;

}
