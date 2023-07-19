#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
        int n=a.size();
        int right=0;
        int left=0;
        long long count=0;
        int ans=0;
        while(right<n){
            if(right<n){
                count+=a[right];
                right++;
            }
            while(left<=right && count>k){
                count-=a[left];
                left++;
            }
            if(count==k){
                ans = max(ans,right-left);
                
            }
        }
        return ans;
}
