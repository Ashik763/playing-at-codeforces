#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  int arr[n];
  int amz=0;
  int min , max;
  for(int i =0;i<n;i++)
  {
  	cin >> arr[i];
  	if(i==0){
  		min = arr[i];
  		max = arr[i];
  	}
  	else if(arr[i]> max) {
  		max =arr[i];
  		amz=amz+1;
  	}
  	else if(arr[i] < min){ 
  		min =arr[i];
  		amz=amz+1;
  		// cout << "ams"<<amz;
  	}
  }
  cout << amz ;
 
}