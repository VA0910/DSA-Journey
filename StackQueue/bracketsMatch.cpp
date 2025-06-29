#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> openB;
        int o=0, c=0;
        for(int i =0;i<s.size();i++){
            char chr=s[i];
            if(chr=='['||chr=='{'||chr=='(') {
                openB.push(chr);
                o++;
            }
            else {
                if(!openB.empty()&&((openB.top()=='(' && s[i]==')')||(openB.top()=='[' && s[i]==']')||(openB.top()=='{' && s[i]=='}'))) {
                    openB.pop();
                
                }
                c++;
            }
        }
        if(openB.empty() && o==c) return true;
        else return false;
    }
};