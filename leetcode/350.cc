// 给你两个整数数组 nums1 和 nums2 ，请你以数组形式返回两数组的交集。返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。

// 输入：nums1 = [1,2,2,1], nums2 = [2,2]
// 输出：[2,2]

#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // if (nums1.size() > nums2.size()) {
        //     return intersect(nums2, nums1);
        // }
        unordered_map <int, int> m;
        for (int num : nums1) {
            ++m[num];
        }
        vector<int> intersection;
        for (int num : nums2) {
            if (m.count(num)) {
                intersection.push_back(num);
                --m[num];
                if (m[num] == 0) {
                    m.erase(num);
                }
            }
        }
        return intersection;
    }
};

