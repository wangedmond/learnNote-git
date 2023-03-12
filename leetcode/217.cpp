// 给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
// 输入：nums = [1,2,3,1]
// 输出：true

#include<vector>
#include<cmath>
#include<algorithm>
#include<map>

using namespace std;
class Solution1 {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res=false;
        if (nums.size()<=1)
        {
            return false;
        }
        
        sort(nums.begin(),nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i]==nums[i-1]){
                res=true;
                break;
            }
        }
        return res;
    }
};

class Solution2 {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res=true;
        map<int,int> t;
        for (int i = 0; i < nums.size(); i++)
        {   
            t[nums[i]]=nums[i];
            /* code */
        }
        if (t.size()==nums.size())
        {
            return false;
        }
        return res;
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int x: nums) {
            if (s.find(x) != s.end()) {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};


int main(){
    return 0;
}