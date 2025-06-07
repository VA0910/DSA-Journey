

#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> getRow(int A) {
    vector<int> ans;

    int num=1;
    ans.push_back(num);
    for(int i=0;i<A;i++){
        num=num*(A-i)/(i+1);
        ans.push_back(num);
    }
    return ans;
}

int main(){
int n;
cin>>n;
vector<int> ans;
ans= getRow(n);
n=ans.size();
for(int i=0;i<n;i++){
    cout<<ans[i];}
return 0;
}
