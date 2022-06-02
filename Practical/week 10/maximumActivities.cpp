#include<bits/stdc++.h>
using namespace std;
    vector<int> MaximumActivities(vector<vector<int>>& intervals) {
        int count=0,l=intervals.size(),j=0;
        sort(intervals.begin(),intervals.end(),[&](auto &a,auto& b)->bool{
            if(a[0]==b[0])return a[1]<b[1];
            return a[0]<b[0];
        });
        vector<int>activites;
        for(int i=1;i<l;i++){
            if(intervals[i][0]>=intervals[j][1]){
                activites.push_back(j+1);
                j=i;
               continue;}
            if(intervals[i][1]<intervals[j][1])
                j=i;
        }
        activites.push_back(j+1);
        return activites;
    }
int main(){
 int n;
 cout<<"input the number of activites :";
 cin>>n;
 vector<vector<int>>intervals(n);
 cout<<"Input the activity time interval :";
 for(auto &i:intervals)cin>>i[0]>>i[1];
 vector<int>activites=MaximumActivities(intervals);
 cout<<"Number of non conflicting activities :";
 cout<<activites.size()<<endl;
 cout<<"Number of selected activites :";
 for(int &i:activites)cout<<i<<" ";
}