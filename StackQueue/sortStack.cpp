#include<bits/stdc++.h>
using namespace std;
//Using arrays
// void SortedStack ::sort() {
//     // Your code here
//     int n=s.size();
//     vector<int> sortedArr(n);
//     for(int i=0;i<n;i++){
//         sortedArr[i]=s.top();
//         s.pop();
//     }
//     sort(sortedArr.begin(),sortedArr.end());
//     for(int i=0;i<n;i++){
//         s.push(sortedArr[i]);
//     }
// }
class SortedStack{
public:
    stack<int> s;
    void sort();
};

//Using auxilary space
void SortedStack ::sort() {
    stack<int> temp;

    while (!s.empty()) {
        int curr = s.top();
        s.pop();

        while (!temp.empty() && temp.top() > curr) {
            s.push(temp.top());
            temp.pop();
        }

        temp.push(curr);
    }

    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}

// Using recursion stack
// void insertInSortedOrder(stack<int>& s, int x) {
//     if (s.empty() || s.top() <= x) {
//         s.push(x);
//         return;
//     }
//     int temp = s.top();
//     s.pop();
//     insertInSortedOrder(s, x);
//     s.push(temp); 
// }

// void SortedStack::sort() {  
//     if (s.empty()) return;

//     int x = s.top();
//     s.pop();

//     sort(); 

//     insertInSortedOrder(s, x); 
// }
