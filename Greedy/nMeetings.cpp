#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<pair<int, int>> meetings;
        // Pair each meeting as {end, start}
        for (int i = 0; i < n; i++) {
            meetings.push_back({end[i], start[i]});
        }
        // Sort by end time
        sort(meetings.begin(), meetings.end());
        int count = 1; // first meeting is always selected
        int lastEnd = meetings[0].first;

        for (int i = 1; i < n; i++) {
            if (meetings[i].second > lastEnd) {
                count++;
                lastEnd = meetings[i].first;
            }
        }

        return count;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> start(n);
    vector<int> end(n);
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    Solution s;
    cout<<s.maxMeetings(start,end);
    return 0;
}