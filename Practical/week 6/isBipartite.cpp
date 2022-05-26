#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>visited;
    bool ans=1;
bool isBipartite(vector<vector<int>>& graph){
    int n=graph.size();
    for(int i=0;i<n;i++){
        visited.push_back(0);
    }
    for(int i=0;i<n;i++){
        if(visited[i])
 dfs(graph,i,visited[i]);
        else 
            dfs(graph,i);
    }
    return ans;
    }
 void dfs(vector<vector<int>>&graph,int k,int luck=1){
        if(visited[k]){
            if(visited[k]!=luck)
                ans=0;
            return;
            }
           visited[k]=luck;
            if(luck==1)luck=2;
            else luck=1;
        for(int i:graph[k]){
             dfs(graph,i,luck);
        }
    }
};
int main(){
  int n,v,s,d;
  cout<<"input the number of edges of the graph :";
  cin>>n;
  cout<<"input the number of vertices of the graph :";
  cin>>v;
  printf("input the %d edges of the graph: ",n);
  vector<vector<int>>g(v);
  for(int i=0;i<n;i++){
      printf("edge %d : ", i+1);
      cin>>s>>d;
      g[s].push_back(d);
      g[d].push_back(s);
   }
   cout<<endl;
   Solution *sol= new Solution ();
   bool ans=sol->isBipartite(g); 
   if(ans){
       cout<<"Graph is bipartite";
   }
   else {
       cout<<"Graph is not bipartite";
   }
}