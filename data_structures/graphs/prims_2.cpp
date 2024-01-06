#include <iostream>
#define INF 999

using namespace std;

int v;
int cost[100][100];
int parent[100];
bool visited[100];
int src;
int key[100];

void init()
{
    for (int i = 0; i < v; i++)
    {
        key[i] = INF;
        parent[i] = -1;  // Initialize parent array to -1
    }
    key[src] = 0;
}

int getMinimumKey()
{
    int minvalue = INF;
    int minnode = 0;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i] && key[i] < minvalue)
        {
            minvalue = key[i];
            minnode = i;
        }
    }
    return minnode;
}

void prim()
{
    for (int i = 0; i < v; i++)
    {
        int nearest = getMinimumKey();
        visited[nearest] = true;

        for (int adj = 0; adj < v; adj++)
        {
            if ((cost[nearest][adj] != INF) && (!visited[adj]) && (cost[nearest][adj] < key[adj]))
            {
                parent[adj] = nearest;
                key[adj] = cost[nearest][adj];
                //we are just checkig for a better value compared to a pre exsting key.
            }
        }
    }
}

void display()
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < v; i++)
    {
        if (parent[i] != -1)
        {
            cout << parent[i] << " - " << i << " \t" << cost[i][parent[i]] << " \n";
        }
    }
}


int main()
{
    cout << "Enter the number of vertices\n";
    cin >> v;
    cout << "Enter the adjacency matrix";
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> cost[i][j];
        }
    }
    cout << "Enter the source node\n";
    cin >> src;
    //not really a required info for prims
    init();
    prim();
    display();

    return 0;
}
