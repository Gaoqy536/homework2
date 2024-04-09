#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    int nums[10010];
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int pre = 0, maxAns = nums[0];
        for (const auto& x : nums) {
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        cout << "最大连续子数组和为：" << maxAns << endl;
    }
    return 0 ;
}