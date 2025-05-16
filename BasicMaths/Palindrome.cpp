#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      long long x_2=x;
      long long n= to_string(abs(x_2)).size();
      if(x<0) return false;
      else if(x==0) return true; 
      else{
        string s = to_string(x);
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
      }
      return true;
    }
};

int main(){
    int x;
    Solution s;
    cout<<"Enter no. to be checked: "<<endl;
    cin>>x;
    cout<<s.isPalindrome(x);
}