#include<stdio.h>
#include<iostream>
#include<vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=nums.size();
        if (res==0){
            return res;
        }
        int slow=1;
        int fast=1;
        for (int i = fast; i < res; i++)
        {
            if (nums[i]!=nums[i-1])
            {
                nums[slow]=nums[i];
                slow++;
                /* code */
            }
            
            /* code */
        }
        
        return slow;


    }
};
int main(){
    Solution res;
    std::vector<int>
    res.removeDuplicates()
    std::cout<<"hello world"<<std::endl;
    return 0;
}