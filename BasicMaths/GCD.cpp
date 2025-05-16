#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int findGCD(int x, int y) {
        if(x==0 || y==0){
            return abs(x-y);
        }

        if(x>=y){
            int k=x%y;
            findGCD(y,k);
        }
        else{
            int k=y%x;
            findGCD(x,k);
    }
}
};

int main(){
    int x,y;
    Solution s;
    cout<<"Enter two no.s "<<endl;
    cin>>x>>y;
    cout<<s.findGCD(x,y);


}