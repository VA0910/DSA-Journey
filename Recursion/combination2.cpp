#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursion(int ind, int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = ind; i < candidates.size(); ++i) {
            // Skip duplicates
            if (i > ind && candidates[i] == candidates[i - 1]) continue;

            // If the number is greater than the remaining target, break
            if (candidates[i] > target) break;

            temp.push_back(candidates[i]);
            recursion(i + 1, target - candidates[i], candidates, temp, ans);  // i+1: move to next
            temp.pop_back();  // backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        recursion(0, target, candidates, temp, ans);
        return ans;
    }
};


int main() {
  int x;
  cin>>x;
  vector<int> arr(x);
  for(int i=0;i<x;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  Solution ob;
  vector<vector<int>> ans = ob.combinationSum2(arr,target);
  
  cout<<"All combinations for the sum are"<<endl;
  for (auto set: ans) {
    for(auto ele: set){
        cout<<ele<<" ";
    }
    cout<<endl;
 }

  return 0;
}