#include<stdlib.h>
#include<stdio.h>
int a[20][20],q[20]={0},vis[20]={0},n,i,j,f=0,r=-1;
void bfs(int v)
{
    for( i=0;i<n;i++)
    {
        if(a[v][i]==1&&vis[i]==0)
        {
            q[++r]=i;
            if(f<=r)
            {
                vis[q[f]]=1;
                bfs(q[f++]);
            }
        }
    }
}
int main()
{
    int v;
    printf("\n Enter the number of vertices :" );

  scanf("%d",&n);
  printf("\n Enter graph data in matrix form : \n" );

    //cout<<"Enter graph data in matrix form : "<<endl;
    for(i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            //cin>>a[i][j];
        }
    }
     printf("\n Enter the starting vertex :" );
   // cout<<"Enter the starting vertex :"<<endl;
    //cin>>v;
    scanf("%d",&v);

    bfs(v);
     printf("\n the node which are reachable are :" );
    //cout<<"the node which are reachable are : "<<endl;
    for( i=0;i<n;i++)
    {
        if(vis[i]==1)
        {
            //cout<<i<<endl;
            printf("\n %d",i);
        }
        else
        {
             printf("\n Bfs is not possible. Not all nodes are reachable :" );
           // cout<<"Bfs is not possible. Not all nodes are reachable"<<endl;
        break;

        }
    }

}