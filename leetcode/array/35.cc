// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

// 请必须使用时间复杂度为 O(log n) 的算法。


// 输入: nums = [-1,0,3,5,9,12], target = 9
// 输出: 4
// 解释: 9 出现在 nums 中并且下标为 4

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int res=-1;
        if(target<nums[0]){
            std::cout<<"nums[0] is" << nums[0]<<std::endl;
            return 0;
        }
        if(target>nums.back()){
            std::cout<<"nums[-1] is" <<nums.back()<<std::endl;
            return nums.size();
        }

        while (left<=right)
        {
            int middle=(left+right)/2;
            std::cout<<"middle is" << middle<<std::endl;
            if(nums[middle]<target){
                left=middle+1;
            }else if(nums[middle]>target){
                right=middle-1;
            }else{
                return middle;
                // res = middle;
                // break;
            }
        }
        return ((left+right)/2)+1;

    }
};


int main(){
    vector<int> nums = {1,3,5,6};
    int target=15;
    Solution res=Solution();
    int num = res.searchInsert(nums,target);
    std::cout<<"res is" << num<<std::endl;
}