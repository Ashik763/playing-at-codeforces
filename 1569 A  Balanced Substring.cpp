#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i,j,k,n,a,b;
    cin >> t;
    while(t--){

            cin >> n;
        string s1;
        cin >> s1;
        for(i=0;i<n;i++){
                 a=0,b=0;
                for(j=i;j<n;j++){
                    if(a==b && a!=0 ){
                        break;
                    }

                    else if(s1[j] == 'a'){
                        a++;
                         if(a==b && a != 0 && b!=0){
                            cout << i+1 << j+1 << endl;
                            break;
                        }

                    }
                    else if(s1[j]=='b'){
                        b++;
                         if(a==b && a != 0 && b!=0){
                            cout << i+1 << j+1 << endl;
                            break;
                        }

                    }
                }
                 if(a==b && a!=0 ){
                        break;
                    }



        }


        if(a != b ){
            cout << -1 <<-1;
        }

    }

    return 0;
}
