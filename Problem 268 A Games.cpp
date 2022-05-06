#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,c=0,j;
    cin >> n;
    int arr[n*2];
    int len = n*2;
    for(i=0;i<len;i=i+2){
        cin >> arr[i] >> arr[i+1];

    }

    for(i=0;i<len;i=i+2){
        for(j=i+3;j<len;j=j+2){
            if(arr[i] == arr[j]){
                c++;
            }
         
        }
    }

    for(i=1;i<len;i=i+2){
        for(j=i+1;j<len;j=j+2){
            if(arr[i] == arr[j]){
                c++;
            }
           // cout << "j" << j << endl;
            //j++;
        }
    }

    cout << c;



    return 0;
}
