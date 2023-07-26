#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Spiral order print
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end) {
        // For row_start
        for (int c = col_start; c <= col_end; c++) {
            cout << a[row_start][c] << " ";
        }
        row_start++;

        // For col_end
        for (int row = row_start; row <= row_end; row++) {
            cout << a[row][col_end] << " ";
        }
        col_end--;

        // For row_end
        for (int c = col_end; c >= col_start; c--) {
            cout << a[row_end][c] << " ";
        }
        row_end--;

        // For col_start
        for (int row = row_end; row >= row_start; row--) {
            cout << a[row][col_start] << " ";
        }
        col_start++;
    }
    return 0;
}
