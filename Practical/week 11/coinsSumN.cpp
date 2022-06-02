#include<bits/stdc++.h>
using namespace std;
   int change(int amount, vector<int>& coins) {
        vector<int>amt(amount+1,0);
        for(int &i:coins){
            for(int j=0;j<=amount;j++){
                if(j+i<=amount)
                    amt[j+i]+=amt[j];
            }
        }
        return amt[amount];
    }
    int main(){
       int n;
 cout<<"input the number of elements of the array";
 cin>>n;
 vector<int>nums(n);
cout<<"input the elements of the array"<<endl;
 for(int i=0;i<n;i++)cin>>nums[i];
 cout<<(change(n,nums))?"yes":"no";
    }