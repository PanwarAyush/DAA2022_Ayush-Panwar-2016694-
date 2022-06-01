#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
class Solution {
public:
    int shortestPath(vector<vector<int>>& places, int n, int k,int AkshayLoc) {
        int shortdist=0;
        vector<int>dist(n,INT_MAX);
        dist[k]=0;
        vector<int>prev(n,-1);
        for(int i=0;i<n;i++){
			for(auto& place:places){
				if(dist[place[0]]==INT_MAX)continue;
				if(dist[place[0]]+place[2]<dist[place[1]]){
					dist[place[1]]=dist[place[0]]+place[2];
					prev[place[1]]=place[0];
				}
			}
		}
	        for(auto& place:places){
				if(dist[place[0]]==INT_MAX)continue;
				if(dist[place[0]]+place[2]>dist[place[1]]){
					return -1;
				}
			}
			vector<int>path;
			k=AkshayLoc;
			path.push_back(AkshayLoc);
			while(AkshayLoc>=0&&prev[AkshayLoc]>=0){
				path.push_back(prev[AkshayLoc]);
				AkshayLoc=prev[AkshayLoc];
			}
			reverse(path.begin(),path.end());
     shortdist=dist[k];
     cout<<"path covering distance from his friends location to his house is :"<<endl;
     for(int &i:path)cout<<i<<" ";
     cout<<endl;
     return shortdist;
    }
};
int main(){
  int n,v,s,d,w,friendLoc,AkshayLoc;
  cout<<"input the number of edges connected by different places :";
  cin>>n;
  cout<<"input the number of places in the graph :";
  cin>>v;
  printf("input %d path edges such that for each, path exist between two places  and there respective distance:\n ",n);
  vector<vector<int>>places;
  for(int i=0;i<n;i++){
      printf("path edge  %d and distance between them  : ", i+1);
      cin>>s>>d>>w;
      places.push_back({s,d,w});
   }
   cout<<"input the starting location of the akshay's friends  :";
   cin>>friendLoc;
   cout<<"input the Akshay's position :";
   cin>>AkshayLoc;
   cout<<endl;
   Solution *sol= new Solution ();
   int distance=sol->shortestPath(places,v,friendLoc,AkshayLoc);
   if(distance==-1){
       cout<<"Path does not exist";
   }
   else {
       cout<<"path exist with shortest distance : "<<distance;
   }
}

/*input the number of edges connected by different places :4
input the number of places in the graph :5
input 4 path edges such that for each, path exist between two places  and there respective distance:
 path edge  1 and distance between them  : 0 1 2
path edge  2 and distance between them  : 1 2 3
path edge  3 and distance between them  : 2 3 4
path edge  4 and distance between them  : 2 4 5
input the starting location of the akshay's friends  :0
input the Akshay's position :4

path covering distance from his friends location to his house is :
0 1 2 4
path exist with shortest distance : 10
*/