class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        
        double res;
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2!=0)
        {
            res=nums1[n/2];
        }
        if(n%2==0)
        {
            double sum=nums1[n/2]+nums1[(n/2)-1];
            res=double(sum/2);
           
        }
        return res;
    }
};