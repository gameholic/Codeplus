#include "Problem_15651.h"


void Problem_15651::function(int index, int n, int m)
{
	if (index == m)
	{
		for (int i = 0; i < m; i++)
		{
			printf("%i ", result[i]);

		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		result[index] = i;
		function(index + 1, n, m);
	}		
}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	
//	Problem_15651 p;
//	p.function(0, n, m);
//}