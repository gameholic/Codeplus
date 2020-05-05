#include "Practice_BFSDFS.h"


/// Purpose of DFS and BFS is same. = visit all nodes once
/// Difference is how will they visit.
///		DFS: Visit all nodes until the end. When it's end, comeback and search another way to go
///			 Use stack
///		BFS: Visit all nodes available from one node at the same time. 
///			 Use queue

//Prcatice DFS with adjacency matrix.

bool check[10]; // default value 10
int a[10][10]; // Contains degrees in the matrix
int n_bfsdfs = 0; //Number of nodes.


/// This function will be called 'v(number of nodes)' times	
/// Time complexity= O(V)(line 26~29) x V(line24) =  O(V^2)

void dfs_adjacencyMatrix(int x)
{
	check[x] = true;  //Set current node's check value to prevent this node to be visited again.
	printf("%d", x); //Print current node
	for (int i = 1; i <= n_bfsdfs; i++)
	{
		if (a[x][i] == 1 && check[i] == false) 
			//If next edge is exists, And haven't visited 
		{
			dfs_adjacencyMatrix(i); //Find new way from current location.
		}
	}
}



/// This function is called V times as adjacency matrix.
/// Time complexity : hard to calculate
///		Because -> a[x].size = number of edges that is connected with specific vortex.
///							   which means it's not number of 'Edges'
///		Sum of the edges of each vortex will be number of all vortex (WHAT THE HELL THIS MEANS LOL. CHECK LECTURE ONCE MORE code.plus/lecture/330
///		=> So Time complexity is O(V+E)
///	Time Complexity = O(V+E)
void dfs_adjacencyList(int x)
{
	check[x] = true;
	printf("%d", x);
	for (int i = 0; i < 10/*a[x].size()*/ ; i++) // loop x times 
	{
		int y = a[x][i]; //Find next connected vortex.
		if (check[y] == false) // If it isn't visited yet
		{
			dfs_adjacencyList(y);//Visit the vortex and do recursive.
		}
	}
}


//////////////////////////////////////////////////
//////////////////// BFS	//////////////////////
//////////////////////////////////////////////////
//Time complexity of BFS algorithms are same as DFS's



//BFS Uses Queue
int n_b; // Number of nodes 
bool check_b[10];
queue<int> q;

void BFS_AdjacencyMatrix()
{
	check_b[1] = true;	//start point of queue
	q.push(1);
	while (!q.empty())	// Run until queue is empty
	{
		int x = q.front(); q.pop(); // Pop front of the queue which means this is the queue where its visiting
		printf("%d", x);
		for (int i = 1; i < n_b; i++) // Search next node (from first to last node)
		{
			if (a[x][i] == 1 && check[i] == false) // Same as DFS
				//If node is connected(There is edge) and it hasn't visited yet,
			{
				check[i] = true;	//visit and change check to true to avoid duplicate visit
				q.push(i);
			}
		}
	}
}


void BFS_AdjacencyList()
{
	check[1] = true;
	q.push(1);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		printf("%d", x);
		for (int i = 0; i < 10/*a.size()*/; i++)
		{
			int y = a[x][i];
			if (check[y] == false)
			{
				check[y] = true;
				q.push(y);
			}
		}
	}
}


