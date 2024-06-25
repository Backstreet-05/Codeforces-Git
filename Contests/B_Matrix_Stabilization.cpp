// #include <bits/stdc++.h>
// using namespace std;

// void inputAndOutput()
// {
//     int n, m;
//     cin>>n>>m;

//     int arr[n][m];

//     for (int i=0; i<n; i++)
//     {
//         for (int j=0; j<m; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for (int i=0; i<n; i++)
//     {
//         for (int j=0; j<m; j++)
//         {
//             if (i==0 || j==0 || i==n-1 || j==m-1)
//             {
//                 if (i==0 && j==0)
//                 {
//                     if (arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i+1][j])
//                     {
//                         arr[i][j]=max(arr[i][j+1], arr[i+1][j]);
//                     }
//                 }
//                 else if (i==n-1 && j==m-1)
//                 {
//                     if (arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j-1])
//                     {
//                         arr[i][j]=max(arr[i][j-1], arr[i-1][j]);
//                     }
//                 }
//                 else if (i==0 && j==m-1)
//                 {
//                     if (arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i][j-1])
//                     {
//                         arr[i][j]=max(arr[i][j-1], arr[i+1][j]);
//                     }
//                 }
//                 else if (i==n-1 && j==0)
//                 {
//                     if (arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j+1])
//                     {
//                         arr[i][j]=max(arr[i-1][j], arr[i][j+1]);
//                     }
//                 }
//                 else if (i==0)
//                 {
//                     if (arr[i][j]>arr[0][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i+1][j])
//                     {
//                         arr[i][j]=max(arr[0][j], max(arr[i][j-1], max(arr[i][j+1], arr[i+1][j])));
//                     }
//                 }
//                 else if (j==0)
//                 {
//                     if (arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][0] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i+1][j])
//                     {
//                         arr[i][j]=max(arr[i-1][j], max(arr[i][0], max(arr[i][j+1], arr[i+1][j])));
//                     }
//                 }
//                 else if(i==n-1)
//                 {
//                     if (arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[n-1][j])
//                     {
//                         arr[i][j]=max(arr[i-1][j], max(arr[i][j-1], max(arr[i][j+1], arr[n-1][j])));
//                     }
//                 }
//                 else if (j==m-1)
//                 {
//                     if (arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][m-1] && arr[i][j]>arr[i+1][j])
//                     {
//                         arr[i][j]=max(arr[i-1][j], max(arr[i][j-1], max(arr[i][m-1], arr[i+1][j])));
//                     }
//                 }
//             }

//             else
//             {
//                 if (arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i+1][j])
//                 {
//                     arr[i][j]=max(arr[i-1][j], max(arr[i][j-1], max(arr[i][j+1], arr[i+1][j])));
//                 }
//             }
//         }
//     }

//     for (int i=0; i<n; i++)
//     {
//         for (int j=0; j<m; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<endl;
//     return;
// }

// int main()
// {
//     int t;
//     cin>>t;

//     for (int i=1; i<=t; i++)
//     {
//         inputAndOutput();
//     }


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void inputAndOutput() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> newArr = arr; // Create a copy to store updated values

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool isPeak = true;
            int maxNeighbour = INT_MIN;

            // Check all four neighbors
            if (i > 0) { // Up
                if (arr[i][j] <= arr[i - 1][j]) isPeak = false;
                maxNeighbour = max(maxNeighbour, arr[i - 1][j]);
            }
            if (i < n - 1) { // Down
                if (arr[i][j] <= arr[i + 1][j]) isPeak = false;
                maxNeighbour = max(maxNeighbour, arr[i + 1][j]);
            }
            if (j > 0) { // Left
                if (arr[i][j] <= arr[i][j - 1]) isPeak = false;
                maxNeighbour = max(maxNeighbour, arr[i][j - 1]);
            }
            if (j < m - 1) { // Right
                if (arr[i][j] <= arr[i][j + 1]) isPeak = false;
                maxNeighbour = max(maxNeighbour, arr[i][j + 1]);
            }

            if (isPeak) {
                newArr[i][j] = maxNeighbour;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        inputAndOutput();
    }

    return 0;
}
