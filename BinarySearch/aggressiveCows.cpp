#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countCows(vector<int> &arr, int k){
        int i=0;
        int j=1;
        int count=1;
        int n= arr.size();
        while(i<n && j<n){
            if((arr[j]-arr[i])>=k){
                count++;
                i=j;
                j++;
            }else j++;
        }
        return count;
    }

    int maxDist(int n, int m, vector<int> &cows){
        int low = 0, high = 1e9, ans = 0;
        sort(cows.begin(),cows.end());
        high = cows[n-1]-cows[0];
        while(low <=high){
            int mid=(low+high)/2;
            if(countCows(cows,mid)<m) {
                high=mid-1;
            }
            else {
                ans=mid;
                low=mid+1;}
        }
        return ans;
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> cows;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cows.push_back(x);
    }
    Solution s;
    cout<<s.maxDist(n,m,cows);

    return 0;

}