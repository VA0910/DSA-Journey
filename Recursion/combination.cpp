#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursion(int ind,int n, vector<vector<int>> & ans, int target, vector<int> &candidates, int sum, vector<int> &temp){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if (ind == n || sum > target) return;
       temp.push_back(candidates[ind]);
        recursion(ind, n, ans, target, candidates, sum + candidates[ind], temp);
        temp.pop_back();  // backtrack

        // Skip current element
        recursion(ind + 1, n, ans, target, candidates, sum, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       int n=candidates.size();
       vector<vector<int>> ans;
       vector<int> temp;
       recursion(0,n,ans,target,candidates,0,temp);
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
  vector<vector<int>> ans = ob.combinationSum(arr,target);
  
  cout<<"All combinations for the sum are"<<endl;
  for (auto set: ans) {
    for(auto ele: set){
        cout<<ele<<" ";
    }
    cout<<endl;
 }

  return 0;
}