#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> nums_sorted = nums;
        sort(nums_sorted.begin(), nums_sorted.end());

        // Map to store all indices of a particular number
        unordered_map<int, vector<int>> index_map;
        for (int i = 0; i < n; ++i) {
            index_map[nums[i]].push_back(i);
        }

        int left = 0, right = n - 1;
        int num1, num2;

        while (left < right) {
            int sum = nums_sorted[left] + nums_sorted[right];
            if (sum == target) {
                num1 = nums_sorted[left];
                num2 = nums_sorted[right];
                break;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        vector<int> result;
        // Get the first index of num1
        result.push_back(index_map[num1][0]);
        // If both are same, use the second index
        if (num1 == num2) {
            result.push_back(index_map[num1][1]);
        } else {
            result.push_back(index_map[num2][0]);
        }

        return result;
    }
};

int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }
  int y;
  cin>>y;
Solution s;
vector<int> ans=s.twoSum(nums,y);
cout << "[" << ans[0] << ", "<< ans[1] << "]" << endl;



return 0;
}