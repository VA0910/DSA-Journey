#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursion(int ind, set<vector<int>> &ans,int n, vector<int> &nums, vector<int> &temp){
        if(ind==n){
            ans.insert(temp);
            return;  
        }
        recursion(ind+1,ans,n,nums,temp);//not selected
        temp.push_back(nums[ind]);
        recursion(ind+1,ans,n,nums,temp);//selected
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;//non-duplicated answers
        int n = nums.size();
        vector<int> temp;
        recursion(0,ans,n,nums,temp);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};

int main() {
  vector < int > arr{3,1,2};
  Solution ob;
  vector<vector<int>> ans = ob.subsetsWithDup(arr);
  sort(ans.begin(), ans.end());
  cout<<"The power set is"<<endl;
  for (auto sum: ans) {
    cout << sum << " ";
  }
  cout << endl;

  return 0;
}