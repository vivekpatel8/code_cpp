#include<bits/stdc++.h>
using  namespace  std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(n > m){
            return findMedianSortedArrays(nums2, nums1);
        }
        int low = 0, high = n;
        while (low <= high)
        {
            int partitionX = (low + high) / 2;
            int partitionY = (n + m + 1)/2 - partitionX;

            int maxleftX = (partitionX == 0)? INT_MAX : nums1[partitionX - 1];
            int maxleftY = (partitionY == 0)? INT_MAX : nums2[partitionY - 1];
            int minRightX = (partitionX == n)? INT_MIN : nums1[partitionX];
            int minRightY = (partitionY == m)? INT_MIN: nums2[partitionY];

            if(maxleftX <= minRightY && maxleftY <= minRightX){
                if((n + m) % 2 == 0){
                    return ((float)max(maxleftX, maxleftY) + (float)min(minRightX, minRightY)) / 2.0;
                }
                else{
                    return max(maxleftY, maxleftX);
                }
            }
            else if(maxleftX > minRightY){
                high = partitionX - 1;
            }
            else{
                low = partitionX + 1;
            }
        }

    }
};
