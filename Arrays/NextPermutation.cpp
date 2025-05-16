#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int ind=-1;
    int n=nums.size();
      for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
           ind =i-1; 
           break;
        }
      }

      if(ind==-1){
        reverse(nums.begin(),nums.end());
        return;
      } 
      int max=nums[ind+1];
      for(int i=n-1;i>ind-1;i--){
        if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
      }
        reverse(nums.begin()+ind+1,nums.end());

    }
};

int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }
Solution s;
s.nextPermutation(nums);
for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;


return 0;
}