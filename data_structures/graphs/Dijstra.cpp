# include <iostream>
using namespace std;

# define INF 999;

int v,cost[100][100];
bool visited[100];
int parent[100];
int source;
int dist[100];


void init()
{
    for(int i=0;i<v;i++){
        dist[i]=INF;
        parent[i]=i;
        //The parent of the node is the same node
        dist[source]=0;
    }
}

int getNearest()
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
    cout<<"Node:"<<"\t"<<"Cost"<<"\t"<<"Path";
    for(int i=0;i<v;i++){
        cout<<i<<"\t\t"<<dist[i]<<"\t\t";
        cout<<"i ";
        int parnode=parent[i];
        while(parnode!=source){
            cout<<"<-- "<<parnode<<" ";
            parnode=parent[parnode];
        }
        cout<<"\n";
    }
}
void dijkstra()
{
    for (int i=0;i<v;i++){
        int nearest= getNearest();
        visited[nearest]=true;

        //update the distance of the adjacent nodes:

        for(int adj=0;adj<v;adj++){
            if ((cost[nearest][adj]!=999) && (dist[adj]>dist[nearest]+cost[nearest][adj])){
                dist[adj]=dist[nearest]+cost[nearest][adj];
                parent[adj]=nearest;
            }
        }
    }
}

int main()
    {
        cout<<"Enter the number of fucking vertices\n";
        cin>>v;
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cin>>cost[i][j];
            }
        }
        cout<<"Enter the source node\n";
        cin>>source;
        init();
        dijkstra();
        display();
    
    }