
#include<bits/stdc++.h>
#include <vector>
using namespace std;

void rotate(vector<vector<int> > &A) {
int n,temp;
n=A.size();

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        swap(A[i][j],A[j][i]);
    }
}
for(int k=0;k<n;k++){
    reverse(A[k].begin(),A[k].end());
}
}

int main(){
int n;
cin>>n;
vector<vector<int>> nums(n, vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>nums[i][j];
    }
}
rotate(nums);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<nums[i][j];
    }
}
return 0;
}
