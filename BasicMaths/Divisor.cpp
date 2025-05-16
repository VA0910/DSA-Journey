#include <iostream>
#include <climits>
#include <cmath>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int x) {
        vector<int> divisor;
        for(int i=1;i<=sqrt(x);i++){
            if(x%i==0){
                divisor.push_back(i);
            if(i!=x/i){
                divisor.push_back(x/i);
            }
            }
        }
return divisor;
    }
};

int main() {
    int x;
    Solution s;
    cout << "Enter no.: " << endl;
    cin >> x;
    for(int num: s.divisors(x)){
        cout<< num<< " ";
    }
}
