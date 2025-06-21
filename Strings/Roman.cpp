#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            switch(s[i]){
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    if(i>0 && s[i-1]=='I') sum+=3;
                    else sum += 5;
                    break;
                case 'X':
                    if(i>0 && s[i-1]=='I') sum += 8;
                    else sum += 10;
                    break;
                case 'L':
                    if(i>0 && s[i-1]=='X') sum += 30;
                    else sum+= 50;
                    break;
                case 'C':
                    if(i>0 && s[i-1]=='X') sum+= 80;
                    else sum += 100;
                    break;
                case 'D':
                    if(i>0 && s[i-1]=='C') sum+= 300;
                    else sum += 500;
                    break;
                case 'M':
                    if(i>0 && s[i-1]=='C') sum+= 800;
                    else sum += 1000;
                    break;
                    
            }

        }
        return sum;
    }
};

int main(){
  string str;
cin>>str;
Solution s;

cout<<s.romanToInt(str);
return 0;
}