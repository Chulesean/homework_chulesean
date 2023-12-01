//The idea is to identify the border of the matrix
//Each time finish a side, the border narrows until they pass each other
#include <iostream>
using namespace std;

void spiral_matrix(int row, int column) {
    int matrix[100][100];
    int num=1;
    int bot=0, top=row-1, left=0, right=column-1;

    while (bot<=top && left<=right) {
        for (int i=left; i<=right; i++) {
            matrix[bot][i] = num++;
        }
        bot++;
        for (int i=bot; i<=top; i++) {
            matrix[i][right] = num++;
        }
        right--;
        if (bot<=top) {
            for (int i=right; i>=left; i--) {
                matrix[top][i] = num++;
            }
            top--;
        }
        if (left<=right) {
            for (int i=top; i>=bot; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    spiral_matrix(n, n);

    return 0;
}