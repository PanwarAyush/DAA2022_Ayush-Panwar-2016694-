#include<bits/stdc++.h>
using namespace std;
bool canPartition(vector<int>& nums) {
      int sum=0;
        for(int i:nums)
           sum+=i;
        if(sum%2)return 0;
        sum/=2;
        vector<int>v(sum+1,0);
        v[0]=1;
        for(int i:nums)
            for(int j=sum;j>=i;j--)
            if(!v[j])v[j]=v[j-i];
        return v[sum];
    }
int main(){
 int n;
 cout<<"input the number of elements of the array";
 cin>>n;
 vector<int>nums(n);
cout<<"input the elements of the array"<<endl;
 for(int i=0;i<n;i++)cin>>nums[i];
 cout<<(canPartition(nums))?"yes":"no";
}