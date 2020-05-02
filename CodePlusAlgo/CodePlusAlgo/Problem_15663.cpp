#include "Problem_15663.h"

//
//int nArray[10];
//int result[10];
//int check[10];
//int duplicate[8];
//
//void Problem_15663::function(int index, int n, int m)
//{
//
//	if (index == m)
//	{
//		for (int i = 0; i < index; i++)
//		{
//			if (check[duplicate[i]] < 2)
//			{
//				if (duplicate[result[i + 1]] == 0 || duplicate[result[i]] == 0)
//					return;
//
//			}		
//
//			printf("%i ", duplicate[result[i]]);	
//
//		}
//		printf("\n");
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (check[nArray[i]] > 0)
//		{
//			check[nArray[i]] -= 1;
//			result[index] = i;
//			function(index + 1, n, m);
//			check[nArray[i]] += 1;
//
//		}
//		
//	}
//}
//int compar(const void* p1, const void* p2) {
//
//	return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//	int n, m;
//	Problem_15663 p;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nArray[i];
//		
//		check[nArray[i]] += 1;
//	}
//	qsort(nArray, n, sizeof(int), compar);
//	/////////////////////////////////////////////////////////
//
//	printf("\n duplicate: ");
//	for (int i = 0; i < 8; i++) // delete duplicated numbers
//	{
//		if (i == 0)
//		{
//			duplicate[i] = nArray[i];
//			printf("%i ", duplicate[i]);
//			continue;
//		}
//		bool check=true;
//		for (int j = i-1; j >= 0; j--)
//		{
//			if (nArray[i] == duplicate[j])
//			{
//				check = false;
//				break;
//			}
//		}
//		if (check)
//			duplicate[i] = nArray[i];
//		
//		
//
//		printf("%i ", duplicate[i]);
//	}
//
//	//////////////////////////////////////////////
//	/////////////////////////////////////////////////////////
//
//	printf("\nCheck: ");
//	for (int i = 0; i < 10; i++) // delete duplicated numbers
//	{
//		printf("%i ", check[i]);
//
//	}
//
//	//////////////////////////////////////////////
//	printf("\n");
//
//	p.function(0, n, m);
//
//
//	return 0;
//}

int p15663_a[10];
int p15663_num[10];
int cnt[10];
void Problem_15663::go(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << p15663_num[p15663_a[i]] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[i] > 0) {
            cnt[i] -= 1;
            p15663_a[index] = i;
            go(index + 1, n, m);
            cnt[i] += 1;
        }
    }
}



int compar(const void* p1, const void* p2) {
    
    	return (*(int*)p1 - *(int*)p2);
    }
int main() {
    Problem_15663 p;
    int n, m;
    cin >> n >> m;
    int temp[10];
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }
    qsort(temp,n, sizeof(int), compar);
    int k = 0;
    int x = temp[0];
    int c = 1;

    //////////
    printf("\n");
    printf("temp :");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", temp[i]);
    }
    printf("\n");
    /////////////
    for (int i = 1; i < n; i++) {
        printf("i = %i, k = %i, x = %i, c = %i, temp[i] = %i\n",i, k, x, c, temp[i]);


        if (x == temp[i]) {
            c += 1;
        }
        else {
            p15663_num[k] = x;
            cnt[k] = c;
            k += 1;
            x = temp[i];
            c = 1;
        }
        printf("i = %i, k = %i, x = %i, c = %i, temp[i] = %i\n", i, k, x, c, temp[i]);
    }
    p15663_num[k] = x;
    cnt[k] = c;
    n = k + 1; 
    //////////////
    printf("\n");
    printf("Num :");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", p15663_num[i]);
    }
    printf("\n");
    ///////////////
     //////////////
    printf("\n");
    printf("Cnt :");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", cnt[i]);
    }
    printf("\n");
    ///////////////

    p.go(0, n, m);
   

    return 0;
}