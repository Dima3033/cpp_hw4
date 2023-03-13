#include <iostream>
#include <string>
using namespace std;
const int row = 10; 
const int col = 10;

void addRowToBeginning(int arr[][row], int& rows, int cols) {
    if (rows >= row) {
        cout << "Error" << endl;
        return;
    }
    for (int j = 0; j < cols; j++) {
        int val;
        cout << "Enter nums -> " << j << ": ";
        cin >> val;
        arr[rows][j] = val;
    }
    rows++; 
}
int main() {
    int arr[row][col];
    int rows = 0;
    int cols;
    cout << "Enter number of culm -> ";
    cin >> cols;
    addRowToBeginning(arr, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
