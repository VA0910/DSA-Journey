
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) { // O(n^2)
        int n= nums.size();
        vector<int> result;
      for(int i=0; i<n;i++){
        if(nums[i+1]<nums[i]){
            bool leader=true;
            for(int j=i;j<n;j++){
                if(nums[j]>nums[i]){
                    leader=false;
                    break;
                    }
                
                }
                if(leader){
                    result.push_back(nums[i]);
            }
        }
      }
      result.push_back(nums[n-1]);
      return result;
    }

    vector<int> leaders2(vector<int> nums){ // optimal solution O(n)
        int n=nums.size();
        int max=nums[n-1];
        vector<int> res;
        res.push_back(max);
        for(int i=n-2;i>=0;i--){
            if(nums[i]>max){
                res.push_back(nums[i]);
                max=nums[i];
            }
        }
        return res;
    }
};

int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }

Solution s;
vector<int> ans=s.leaders(nums);

for(auto num: ans){
    cout<<num<<" ";
}
cout<<endl;

vector<int> ans2=s.leaders2(nums);

for(auto num: ans2){
    cout<<num<<" ";
}




return 0;
}