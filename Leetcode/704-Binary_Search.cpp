#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int search(vector<int>& nums, int target) {
    int left=0, right=nums.size()-1, mid;
    while(left<=right){
        mid = left + (right-left)/2;
        if(nums[mid]<target){
            left = mid+1;
        }else if(nums[mid]>target){
            right = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int>nums{-1,0,3,5,9,12};
    int ans = search(nums, 9);
    cout << ans << endl;
    return 0;
}