#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<int> d_min(n), d_max(n);

 
        int j = 0;
        for (int i = 0; i < n; ++i) {
            while (j < n && b[j] < a[i]) j++;
            d_min[i] = b[j] - a[i];
        }

  
        int end=n-1;
        for (int i = n - 1; i >=0;i--){
            int k=0;
            while(b[end-k]>a[i]) k++;
            d_max[i]=b[end]-a[i];
            if(k==1||k==0) end--;
        }

        for (int x : d_min) cout << x << " ";
        cout << "\n";

        for (int x : d_max) cout << x << " ";
        cout << "\n";
    }
}

int main() {

    solve();
    return 0;
}
