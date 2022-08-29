// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
// const int N = 1e5+10;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int sz = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int sum = 0;
        
        for(int i=0;i<sz;i++){
            sum = sum+nums[i];
            nums[i] = sum;
        }
        
        
        for(int i=0;i<queries.size();i++){
            auto it = lower_bound(nums.begin(),nums.end(),queries[i]);
            if( it!= nums.end() && it>=num.begin() && *(it) ==queries[i]){
               // cout << it - nums.begin() << endl;
                ans.push_back(it - nums.begin()+1);
            }
             else if(it == nums.end()){
                ans.push_back(it - nums.begin()+1);
            }
            else if (*(it)!=queries[i] && it!= nums.begin()){
               // cout << it - nums.begin() << endl;
                ans.push_back(it - nums.begin()) ;
            }
            
            else {
                ans.push_back(0);
            }
        }
        
        return ans;
        
    }


int main()
{
		vector<int> nums = { 4,5,2,1};
		vector<int> queries = {3,10,21};
		cout << "HE";
		
		
		answerQueries(nums,queries);
	
	
}
    
