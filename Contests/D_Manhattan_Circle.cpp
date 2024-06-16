#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    int n, m;
    cin>>n>>m;

    char mat[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int row = -1, col = -1;
int maxRowCount = 0, maxColCount = 0;

// Find the row with maximum #
for (int i = 0; i < n; i++) {
    int rowCount = 0;
    for (int j = 0; j < m; j++) {
        if (mat[i][j] == '#') {
            rowCount++;
        }
    }
    if (rowCount > maxRowCount) {
        maxRowCount = rowCount;
        row = i;
    }
}

// Find the column with maximum #
for (int j = 0; j < m; j++) {
    int colCount = 0;
    for (int i = 0; i < n; i++) {
        if (mat[i][j] == '#') {
            colCount++;
        }
    }
    if (colCount > maxColCount) {
        maxColCount = colCount;
        col = j;
    }
}

    cout<<row+1<<" "<<col+1<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;

    for (int i=1; i<=t; i++)
    {
        inputAndOutput();
    }
    return 0;
}