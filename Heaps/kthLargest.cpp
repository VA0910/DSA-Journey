#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        for(int j=0;j<k-1;j++){
            pq.pop();
        }
        return pq.top();
    }
};