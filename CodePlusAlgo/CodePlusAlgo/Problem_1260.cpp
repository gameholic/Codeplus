
/// Search graph with DFS and BFS
/// If there are more than one nodes, visit small number node first
/// When there are no nodes available to visit, End program
/////////////////////////////
/// There are 1~'n' nodes ///
/////////////////////////////
/////////// Input ///////////
// First input: number of nodes (1 <= N <= 1000)
// Second input: number of edges ( 1<= M <= 10,000)
// Third input: index of starting node
/// condition: There can be several edges between two nodes.
///			   Edges are both ways.
//////////////////////////////
/////////// Output ///////////
// DFS result on first line
// BFS result on second line
//////////////////////////////

#include "Problem_1260.h";


vector< vector <int > > vecMatrix; //Adjancency matrix. First index is the node and second index is connected node's index.
//value is number of edges
vector <int> vecList[1000];
bool check1260[1000];

///DFS with adjacencyList
void DFS(int x)
{
	check1260[x] = true;
	printf("%d ", x);
	for (int i = 0; i < vecList[x].size(); i++)
	{
		int next = vecList[x][i];
		if (check1260[next] == false)
		{
			DFS(next);
		}
	}
}

void BFS(int v)
{
	queue<int> q;
	memset(check1260, false, sizeof(check1260));
	check1260[v] = true;
	q.push(v);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < vecList[x].size(); i++)
		{
			int y = vecList[x][i];
			if (check1260[y] == false)
			{
				check1260[y] = true;
				q.push(y);
			}
				
		}
	}
}
int main()
{
	int n = 0; // number of nodes
	int m = 0; // number of edges
	int v = 0; // index of starting node.
	cin >> n >> m >> v;
	//check.resize();


	for (int i = 0; i < m; i++)
	{
		int a, b;

		cin >> a >> b;
		//scanf_s("%d %d", &a, &b);
		//printf("a is %d b is %i\n", a, b);
		vecList[a].push_back (b);
		vecList[b].push_back (a);
		//Check the list if it's filled right
		/*for (int i = 0; i < vecList[a].size(); i++)
			printf("%i / ", vecList[a][i]);
;
		for (int i = 0; i < vecList[b].size(); i++)
			printf("%i / ", vecList[b][i]);
		printf("\n");*/
		//vecMatrix[a][b] += 1;	//check if there is more than 2 edges
	
	}

	for (int i = 1; i <= n; i++)
	{
		sort(vecList[i].begin(), vecList[i].end());
	}

	printf("DFS test\n");
	DFS(v);
	printf("\nBFS test\n");
	BFS(v);

	//Check if vecwtor is written correctly
	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j <= n; j++)
	//	{
	//		if (vec[i][j] >0 )
	//		{
	//			int tmp = vec[i][j];
	//			for (int z = 0; z < tmp; z++)
	//			{
	//				printf("(%d %d)", i, j);
	//				printf("\n");

	//			}
	//		}
	//	}
	//}

	return 0;
}