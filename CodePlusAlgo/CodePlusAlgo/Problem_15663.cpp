#include "Problem_15663.h"


int nArray[10];
int result[10];
int check[10];
//int dCheck[10];


void Problem_15663::function(int index, int n, int m)
{
	if (index == m)
	{
		for (int i = 0; i < m; i++)
		{
			if (check[nArray[result[i]]] < 0)
			{
				continue;
			}
			printf("%i ", nArray[result[i]]);

		}
		printf("\n");

		//copy(begin(check), end(check), begin(dCheck));
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (check[nArray[i]] > 0)
		{
			check[i] -= 1;
			result[index] = i;
			function(index + 1, n, m);
			
			check[i] +=1;
		}
	}
}
int compar(const void* p1, const void* p2) {

	return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int n, m;
	Problem_15663 p;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> nArray[i];
		check[nArray[i]] += 1;
		//dCheck[nArray[i]] += 1;
	}
	qsort(nArray, n, sizeof(int), compar);
	p.function(0, n, m);

	return 0;
}