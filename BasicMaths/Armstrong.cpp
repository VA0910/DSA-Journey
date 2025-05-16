#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

class Solution {
public:
    bool digits(int x) {
      long long x_2= x;
      string s= to_string(abs(x_2));
      int n =s.size();
      int sum=0;
      for(int i=0;i<n;i++){
        int digit= s[i]-'0';
        sum+=round(pow(digit,n));
      }
      return abs(x)==sum;
    }
};

int main(){
    int x;
    Solution s;
    cout<<"Enter no.: "<<endl;
    cin>>x;
    cout<<boolalpha<<s.digits(x);
}