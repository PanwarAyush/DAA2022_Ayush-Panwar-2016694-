#include<bits/stdc++.h>
using namespace std;
 bool majorityElement(vector<int> nums) {
        int count = 0;
        int candidate = INT_MIN;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate!=INT_MIN;
    }
    double median(vector<int>nums){
        double med=0;
        int l=nums.size();
        if(l==0)return NULL;
        if(l==1)return nums[0];
        sort(nums.begin(),nums.end());
        if(l%2)
        return nums[l/2];
        return (nums[l/2-1]+nums[l/2])/2.0;
    }
    int main(){
      int n;
      cout<<"input the number of elements of the array";
      cin>>n;
      vector<int>nums(n);
      cout<<"input the elements of the array"<<endl;
      for(int i=0;i<n;i++)cin>>nums[i];
      cout<<majorityElement(nums)<<endl<<median(nums);
    }