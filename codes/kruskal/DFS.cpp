#include<bits/stdc++.h>
#include <windows.h>
void DFS(int);
int G[10][10],vis[10]={0},n;


using namespace std;
int main()
{
    SetConsoleTitle("  BU  ***  Shariful Islam ");
    int i,j;
    cout<<"Enter the number of vertices :"<<endl;
    cin>>n;
    cout<<"Enter the adjecency matrix of the graph :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>G[i][j];
        }
    }
    DFS(0);

}
void DFS(int i)
{
    int j;
    cout<<"the visted graph is : "<<endl;
    cout<<i<<endl;
    vis[i]=1;
    for(int j=0;j<n;j++)
    {
        if(vis[j]==0&&G[i][j]==1)
            DFS(j);
    }
}
