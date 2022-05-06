#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   	int n,m,pos = 1 ;
   	long long int count =0;
   
   	cin >> n >> m;
    int arr[m+1] ;
   	for( int i=1;i<m+1;i++)
   	{
   		cin >> arr[i] ;
   		
   	}
   	for(int j = 1;j< m+1;j++){
   		if(arr[j] > pos){
   			count = count + (arr[j]-pos);
   			pos = arr[j];
   		}
   		else if(arr[j] < pos){
   			count = count + (n-pos)+ arr[j];
   			pos = arr[j];
   		}
   	}
   	cout << count << endl;
 
}