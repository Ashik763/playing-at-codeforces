// "To live is to suffer, to survive is to find some meaning in the suffering."

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"

const int N = 1010;
int graph1[N][N];

vector<int> graph2[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //  GRAPH REPRESENTATION WITH ADJACENCY LIST
  // O(N+M) SPACE COMPLEXITY
  //  ______________________________________________
  int n,m;
  cin >> n >> m;             //n:number of vertices,m:number of edges

  for(int i=0;i<m;i++){
    int v1,v2;
    cin >> v1 >> v2;
     

    graph2[v1].pb(v2);
    graph2[v2].pb(v1);

  }



   
  
}

