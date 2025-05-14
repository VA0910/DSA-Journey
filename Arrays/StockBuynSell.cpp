#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //    int currDiff=0; 
    //    int maxDiff=0;
       int n=prices.size();
    //    for(int i=1;i<n;i++){
    //     currDiff=max(0,currDiff+=prices[i]-prices[i-1]); //Kadane's Algorithm
    //     maxDiff=max(maxDiff,currDiff);
    //    }
    //    return maxDiff;
    
    int min=prices[0];
    int max=0;
    for(int i=0;i<n;i++){
        if(prices[i]>min){
            max=prices[i]-min;
        }
        else{
            min=prices[i];
        }
    }
    return max;
    }      

};
int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }
Solution s;
cout<<s.maxProfit(nums);

return 0;
}
