// 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

// 输入: nums = [-1,0,3,5,9,12], target = 9
// 输出: 4
// 解释: 9 出现在 nums 中并且下标为 4

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int res=-1;
        while (left<=right)
        {
            int middle=(left+right)/2;
            std::cout<<"middle is" << middle<<std::endl;
            if(nums[middle]<target){
                left=middle+1;
            }else if(nums[middle]>target){
                right=middle-1;
            }else{
                res = middle;
                break;
            }
        }
        return res;

    }
};


int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target=2;
    Solution res=Solution();
    int num = res.search(nums,target);
    std::cout<<"res is" << num<<std::endl;
}