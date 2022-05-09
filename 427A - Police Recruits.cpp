#include <iostream>
using namespace std;
 
int main()
{
    int n,j=0;
    cin >> n;
    int count = 0;
    int arr[n];
    for(int i =0;i<n;i++){
    	cin >> arr[i];
    
    }
    int one =0;
   
     for(int i =0;i<n;i++){
     	if(arr[i]>0){
     		one=one+arr[i];
     	}
    	  
    		else if(one!=0 && arr[i]<0){
    			if(one>0)one--;
    		}
    		else if(arr[i]<0 && one==0){
    			count++;
    			
    		}
    	
    }
    cout << count << endl;
}