#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int count_0=0;
        int count_1=0;
        int count_2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) count_0++;
            else if(nums[i]==1) count_1++;
            else count_2++;
        }
        vector<int> nums_sorted;
      
            nums_sorted.insert(nums_sorted.begin(),count_0,0);
            nums_sorted.insert(nums_sorted.begin()+count_0,count_1,1);
            nums_sorted.insert(nums_sorted.begin()+count_0+count_1,count_2,2);
            nums.swap(nums_sorted);
        
    }
};

// Using Dutch National Flag Algorithm
void sortArray(vector<int>& arr, int n) {

    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }

Solution s;
s.sortColors(nums);
for(auto num:nums){
    cout<<num<<" ";
}



return 0;
}