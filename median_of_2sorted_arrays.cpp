class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s=nums1.size() + nums2.size();
        vector<int> merged(s); 
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        if(s%2==0)return double(merged[(s/2)-1]+merged[(s/2)])/2;
        else return merged[s/2];
    }
};
