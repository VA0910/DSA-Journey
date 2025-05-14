#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //Brute force - TC- O(n^3)
    //Using Kadane's Algorithm - TC - O(n)
     int currSum=nums[0];
     int maxSum=nums[0];
     for(int i=1;i<nums.size();i++){
      currSum=max(nums[i],currSum+nums[i]);
      maxSum=max(maxSum,currSum);
    
     }
     return maxSum;
    }
};


int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }
Solution s;
cout<<s.maxSubArray(nums);

return 0;
}