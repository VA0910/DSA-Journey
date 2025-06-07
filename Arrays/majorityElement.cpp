
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int majorityElement(const vector<int> &A) {
    int count = 0;
    int candidate = -1;

    // First pass to find a candidate
    for (int num : A) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main(){
  vector<int> nums;
  int x;

  while(cin>>x && x!=-1){
    nums.push_back(x);
  }

cout<<majorityElement(nums);

return 0;
}