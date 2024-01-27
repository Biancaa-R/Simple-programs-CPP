//Dijkstra's algorithm:
#include<iostream>
# define INF 999
using namespace std;

int v;
int cost[100][100];
int parent[100];
int dist[100];
bool visited[100];
int src;

void init()
{
    for(int i=0;i<v;i++){
        dist[i]=INF;
        parent[i]=i;
    }
    dist[src]=0;
}

int main()
{
    //inputting the necessary values
    cout<<"Enter the number of vertices";
    cin>>v;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>cost[i][j];
        }
    }
    cout<<"Enter the source node\n";
    cin>>src;
}

void dijkstra()
{
    for(int i=0;i<v;i++){
        int nearest=getnearest();
        visited[nearest]=true;
        for(int adj;adj<v;adj++){
            if(cost[nearest][adj]!=INF && dist[adj]>dist[nearest]+cost[nearest][adj]){
                dist[adj]=dist[nearest]+cost[nearest][adj];
                parent[adj]=nearest;
            }
        }
    }
}

int getnearest()
{
    int minvalue=INF;
    int minnode=0;
    for(int i=0;i<v;i++){
        if(!visited[i] && dist[i]<minvalue){
            minvalue=dist[i];
            minnode=i;
        }
    }
    return minnode;
}

void display()
{
    cout<<"Node:\t"<<"cost:\t"<<"path\n";
    for(int i=0;i<v;i++){
        cout<<i<<"\t"<<dist[i]<<"\t";
        cout<<"i";
        int parnode=parent[i];
        while(parnode!=src){
            cout<<"<-- ";
            cout<<parnode;
            parnode=parent[parnode];
        }
        cout<<"\n";
    }
}