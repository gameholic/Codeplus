#include "Problem_15663_Answer.h"

using namespace std;
int a[10];
int num[10];
int c[10];
vector<vector<int>> d;
void go(int index, int n, int m) {
    if (index == m) {
        vector<int> temp;
        for (int i = 0; i < m; i++) {
            temp.push_back(num[a[i]]);
        }
        return;
    }
    for (int i = 0; i < n; i++) {
        if (c[i]) continue;
        c[i] = true;
        a[index] = i;
        go(index + 1, n, m);
        c[i] = false;
    }
}/*
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    go(0, n, m);
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());

    printf("\n\nResult\n");
    for (auto& v : d) {
        for (int i = 0; i < m; i++) {
            cout << v[i];
            if (i != m - 1) {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}*/