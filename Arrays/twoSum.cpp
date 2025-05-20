#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            int moreNeeded = target - num;
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
    return { -1, -1};

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