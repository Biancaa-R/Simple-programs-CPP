//Dijkstra Darling!

# include <iostream>
# define INF 999;
using namespace std;

    int v;
    int cost[100][100];
    int parent[100];
    bool visited[100];
    int src;
    int dist[100];
    
void init()
{
    for(int i=0;i<v;i++){
        dist[i]=INF;
        parent[i]=i;
    }
    dist[src]=0;

}

int getnearest()
{
    int minvalue=INF;
    int minnode=0;
    for(int i=0;i<v;i++){
        if (!visited[i] && dist[i]<minvalue){
            minvalue=dist[i];
            minnode=i;
        }
    }
    return minnode;
}

void dijkstra(){
    for (int i=0;i<v;i++){
        int nearest=getnearest();
        visited[nearest]=true;

        for (int adj=0;adj<v;adj++){
            if((cost[nearest][adj]!=999) && (dist[adj]>dist[nearest]+cost[nearest][adj])){
                dist[adj]=dist[nearest]+cost[nearest][adj];
                parent[adj]=nearest;
                //as we reach the adj via nearest
            }
        }
    }
}

void display()
{
    cout<<"Node:  cost:   path:\n";
    for(int i=0;i<v;i++){
        cout<<i<<"\t"<<dist[i]<<"\t\t";
        cout<<"i";
        int parnode=parent[i];
        while(parnode!=src){
            cout<<"--> "<<parnode;
            parnode=parent[parnode];
        }
        cout<<"\n";
    }
}

int main()
{
    cout<<"Enter the number of vertices\n";
    cin>>v;
    cout<<"Enter the adjacency matrix";
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>> cost[i][j];
        }
    }
    cout<<"Enter the source node\n";
    cin>>src;
    init();
    dijkstra();
    display();

/*PS C:\Users\Biancaa. R\cpp\data_structures\graphs> cd "c:\Users\Biancaa. R\cpp\data_structures\graphs\" ; if ($?) { g++ dijkstra.cpp -o dijkstra } ; if ($?) { .\dijkstra }
Enter the number of vertices
9
Enter the adjacency matrix0
4
999
999
999
999
999
8
999
4
0
8
999
999
999
999
11

999
999
8
0
7
999
4
999
999
2
999
999

7
0
9
14
999
999
999
999
999
999
9
0
10
999
999
999
999
999
4
14
10
0
2
999
999
999
999
999
999
999
2
0
1
6
8
11
999
999
999
999
999
1
0
7
999
999
2
999
999
999
6
7
Enter the source node
0
Node:  cost:   path:
0       0               i
1       4               i
2       12              i--> 1
3       10              i--> 8--> 7
4       19              i--> 3--> 8--> 7
5       16              i--> 2--> 1
6       18              i--> 5--> 2--> 1
7       8               i
8       8               i--> 7
PS C:\Users\Biancaa. R\cpp\data_structures\graphs> */

}
