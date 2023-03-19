// 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。

// 如果数组中不存在目标值 target，返回 [-1, -1]。

// 你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。


// 输入：nums = [5,7,7,8,8,10], target = 8
// 输出：[3,4]

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        // int res=-1;
        vector<int> res = {-1,-1};
        int res_short=-1;
        int res_long=-1;

        if(nums.size()<1){
            return res;
        }
        if(nums.size()==1 && nums[0]==target){
            res[0]=0;
            res[1]=0;
            return res; 
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
                if(middle==0){
                    if(nums[middle]==nums[middle+1]){
                        res[0]=middle;
                        res[1]=middle+1;
                        return res;
                    }else{
                        res[0]=middle;
                        res[1]=middle;
                        return res;
                    }
                }
                if(middle==nums.size()-1){
                    if(nums[middle]==nums[middle-1]){
                        res[0]=middle-1;
                        res[1]=middle;
                        return res;
                    }else{
                        res[0]=middle;
                        res[1]=middle;
                        return res;
                    }

                }
                if(nums[middle]==nums[middle-1]){
                    res[0]=middle-1;
                    res[1]=middle;
                    return res;
                }
                if(nums[middle]==nums[middle+1]){
                    res[0]=middle;
                    res[1]=middle+1;
                    return res;
                }
                res[0]=middle;
                res[1]=middle;
                break;

            }
        }
        return res;
    }
};


int main(){
    vector<int> nums = {1,3};
    int target=1;
    Solution res=Solution();
    vector<int> resnum = res.searchRange(nums,target);
    for(int i=0;i<=resnum.size();i++){
        std::cout<<"resnum is" << resnum[i]<<std::endl;
    }
}