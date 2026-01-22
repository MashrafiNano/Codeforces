#include<bits/stdc++.h>
using namespace  std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin >> arr[i];
        }
        int odd=0,even=0;
        for (int i=0;i<n;i++) {
            if (i% 2 != arr[i] % 2) {
                if (arr[i] % 2 == 1) {
                    odd++;
                }
                else {
                    even++;
                }
            }
        }
        if (odd != even) {
            cout << -1 << endl;
        }
        else {
            cout << even << endl;
        }

    }

    return 0;
}