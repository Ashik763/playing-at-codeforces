#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 ll h,w;
 cin >> h >> w;
 ll row[h],col[w];
 ll mat[h][w];
 for(int i=0;i<h;i++){
  for(int j=0;j<w;j++){
    mat[i][j]=0;
  }
 }
 for(int i=0;i<h;i++){
  cin >> row[i];
 }
 for(int i=0;i<w;i++){
  cin >> col[i];
 }
 for(int i=0;i<h;i++){
  for(int j=0;j<row[i];j++){
    mat[i][j]=1;
  }

 }

 for(int i=0;i<w;i++){
    for(int j=0;j<col[i];j++){
      mat[j][i]=1;
    }

 }
 
 for(int i=0;i<h;i++){
  ll count=0;
  for(int j=0;j<w;j++){
    if(mat[i][j]==1)count++;
    if((mat[i][j]==0 && count == row[i]))break;
    if((mat[i][j]==0 && count != row[i]) || (count > row[i])){
      cout << 0 << endl;
      fuck_off;

    }
    
    
  }
 

 }
 for(int i=0;i<w;i++){
   ll count=0;
  for(int j=0;j<h;j++){
     if(mat[j][i]==1) count++;

     if(mat[j][i]==0 && count == col[i])break;

    if((mat[j][i]==0 && count != col[i]) || ( count > col[i] ) ){
      
            cout << 0 << endl;

      fuck_off;

    }
   
  }
 

 }
 



 ll count=0;

 for(int i=0;i<h;i++){
   bool paici = false;
  for(int j=0;j<w;j++){
    if(mat[i][j] ==0 && paici == false ){
      paici = true;
    
    }
    else if(mat[i][j] ==0 && paici == true  && i!=0 && j!=0 ){
      
      bool pa2 = false;
        for(int l = 0;l<i;l++){
          if(mat[l][j] == 0){
            
            pa2 =true;
            break;
          }
        }
        if(pa2==true){
          count++;
        }
      
    }

  }

 }
 
 ll p=1;

while(count--)
    {
        p = ((p % 1000000007) * (2)) % 1000000007;
    }

    cout << p << endl;

 
}

