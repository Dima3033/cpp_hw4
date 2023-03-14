#include <iostream>
using namespace std;

void deleteRow(int** arr, int& rows, int cols, int index) {
    if (index < 0 || index >= rows) {
        cout << "Error" << endl;
        return;
    }

    for (int i = index; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = arr[i + 1][j];
        }
    }
    rows;
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
}
int main() {
    int rows, cols, index;
    cout << "Enter  rows -> ";
    cin >> rows;
    cout << "Enter  colums -> ";
    cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for row " << i + 1 << " column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    cout << "Enter index of row to delete (0 to " << rows - 1 << "): ";
    cin >> index;

    deleteRow(arr, rows, cols, index);

    cout << "Finish " << index << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
