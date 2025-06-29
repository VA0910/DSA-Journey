#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;      // num -> next greater
        stack<int> st;

        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nge[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> res;
        for (int num : nums1) {
            if (nge.count(num))
                res.push_back(nge[num]);
            else
                res.push_back(-1);
        }

        return res;
    }
};

int main() {
  int n1;
  cin>>n1;
  vector<int> arr1(n1);
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  int n2;
  cin>>n2;
  vector<int> arr2(n2);
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }

  Solution ob;
  vector<int> ans = ob.nextGreaterElement(arr1,arr2);
  
  cout<<"All combinations for the sum are"<<endl;
  for (auto ele: ans) {
        cout<<ele<<" ";
    }
    cout<<endl;

  return 0;
}