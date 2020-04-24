#include "Problem_15650.h"

void Problem_15650::function(int index, int start, int n, int m)
{

	if (index == m)
	{
		for (int i = 0; i < m; i++)
		{
			//cout << result[i] << " ";
			printf("%i ", result[i]);
		}
		//cout << endl;
		cout << endl;
		return;
	}
	for (int i = start; i <= n; i++)
	{

		result[index] = i;
		function(index + 1,i+1, n, m);
	}
}
//
//int main()
//{
//	int n, m;
//	
//	cin >> n >> m;
//	if (m > n || n > 8 || m < 1)
//		return 0;
//
//	Problem_15650 p;
//	p.function(0, 1,n, m);
//	return 0;
//}