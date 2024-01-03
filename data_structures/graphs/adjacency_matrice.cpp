// C++ program to add and remove Vertex in Adjacency Matrix

#include <iostream>

using namespace std;

class Graph {
private:
	// number of vertices
	int n;

	// adjacency matrix
	int g[10][10];

public:
	// constructor
	Graph(int x)
	{
		n = x;

		// initializing each element of the adjacency matrix to zero
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				g[i][j] = 0;
			}
		}
	}

	void displayAdjacencyMatrix()
	{
		cout << "\n\n Adjacency Matrix:";

		// displaying the 2D array
		for (int i = 0; i < n; ++i) {
			cout << "\n";
			for (int j = 0; j < n; ++j) {
				cout << " " << g[i][j];
			}
		}
	}

	void addEdge(int x, int y)
	{

		// checks if the vertex exists in the graph
		if ((x >= n) || (y > n)) {
			cout << "Vertex does not exists!";
		}

		// checks if the vertex is connecting to itself
		if (x == y) {
			cout << "Same Vertex!";
		}
		else {
			// connecting the vertices
			g[y][x] = 1;
			g[x][y] = 1;
		}
	}

	void addVertex()
	{
		// increasing the number of vertices
		n++;
		int i;

		// initializing the new elements to 0
		for (i = 0; i < n; ++i) {
			g[i][n - 1] = 0;
			g[n - 1][i] = 0;
		}
	}

	void removeVertex(int x)
	{
		// checking if the vertex is present
		if (x > n) {
			cout << "\nVertex not present!";
			return;
		}
		else {
			int i;

			// removing the vertex
			while (x < n) {
				// shifting the rows to left side
				for (i = 0; i < n; ++i) {
					g[i][x] = g[i][x + 1];
				}

				// shifting the columns upwards
				for (i = 0; i < n; ++i) {
					g[x][i] = g[x + 1][i];
				}
				x++;
			}

			// decreasing the number of vertices
			n--;
		}
	}
};

int main()
{
	// creating objects of class Graph
	Graph obj(4);

	// calling methods
	obj.addEdge(0, 1);
	obj.addEdge(0, 2);
	obj.addEdge(1, 2);
	obj.addEdge(2, 3);
	// the adjacency matrix created
	obj.displayAdjacencyMatrix();

	// adding a vertex to the graph
	obj.addVertex();
	// connecting that vertex to other existing vertices
	obj.addEdge(4, 1);
	obj.addEdge(4, 3);
	// the adjacency matrix with a new vertex
	obj.displayAdjacencyMatrix();

	// removing an existing vertex in the graph
	obj.removeVertex(1);
	// the adjacency matrix after removing a vertex
	obj.displayAdjacencyMatrix();

	return 0;
}
