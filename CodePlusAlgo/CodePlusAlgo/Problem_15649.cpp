#include "Problem_15649.h"




void Problem_15649::function(int index, int n, int m)
{

	if (index == m)
	{
		for (int i = 0; i < m; i++)
		{
			//cout << result[i] << " ";
			printf("%i ",result[i]);
		}
		//cout << endl;
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (check[i])
		{
			//cout << "check[" << i << "] passed" << endl;
			continue;
		}
		check[i] = true;
		result[index] = i;	
		function(index + 1, n, m);
		check[i] = false;
	}
}
//
//int main()
//{
//	int n, m;
//	Problem_15649 p;
//
//	cin >> n >> m;
//	if (m > n || n > 8 || m < 1)
//		return 0;
//	
//	p.function(0, n, m);
//	return 0;
//
//}
