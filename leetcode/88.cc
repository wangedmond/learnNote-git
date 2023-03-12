#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        // sort(nums1.begin(),nums1.end());

        if (nums2.size()==0)
        {
            sort(nums1.begin(),nums1.end());
            return;
        }
        int index=nums1.size()-nums2.size();
        for (int i = 0; i < nums2.size(); i++)
        {
            nums1[index+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
        
        

    }
};