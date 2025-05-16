#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int digits(int x) {
      long long x_2= x;
      int n = to_string(abs(x_2)).size();
      return n;
    }
};

int main(){
    int x;
    Solution s;
    cout<<"Enter no.: "<<endl;
    cin>>x;
    cout<<s.digits(x);
}