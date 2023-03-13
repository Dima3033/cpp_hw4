#include <iostream>
#include <cstring>
using namespace std;
void addStringToEnd(char**& array, int& rows, const char* str) {
    char** newArray = new char*[rows + 1];
    for (int i = 0; i < rows; i++) {
        newArray[i] = array[i];
    }
    char* newString = new char[strlen(str) + 1];
    strcpy(newString, str);
    newArray[rows] = newString;
    delete[] array;
    array = newArray;
    rows++;
}
int main() {
    char** array = new char*[3];
    int rows = 3;
    array[0] = new char[6];
    strcpy(array[0], "hello");
    array[1] = new char[5];
    strcpy(array[1], "world");
    array[2] = new char[4];
    strcpy(array[2], "foo");
    for (int i = 0; i < rows; i++) {
        cout << array[i] << endl;
    }
    addStringToEnd(array, rows, "bar");
    for (int i = 0; i < rows; i++) {
        cout << array[i] << endl;
    }
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
