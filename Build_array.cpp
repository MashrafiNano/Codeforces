#include<bits/stdc++.h>
using namespace  std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>main_stack;
        int increase=1;
        int i=0;
        while (i < target.size()){
            if (increase == target[i]){
                main_stack.push_back("Push");
                i ++;
            }
            else{
                main_stack.push_back("Push");
                main_stack.push_back("Pop");
            }
            increase++;
        }
        return main_stack;
    }
};
int main() {
    Solution s;

    vector<int> target = {1, 2, 3};
    int n = 3;

    vector<string> result = s.buildArray(target, n);

    for (string op : result) {
        cout << op << " ";
    }
    cout << endl;
    return 0;
}