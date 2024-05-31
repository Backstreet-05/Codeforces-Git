#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    int arr[5][5];

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin>> arr[i][j];
        }
    }

    int row, col=-1;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (arr[i][j]==1)
            {
                row=i;
                col=j;
                break;
            }
        }
    }

    int result = (abs(row-2) + abs (col-2));

    cout<<result;
    return;
}

int main()
{
    inputAndOutput();
    return 0;
}