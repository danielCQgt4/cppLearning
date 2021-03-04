#include <iostream>

const int ROWS = 5;
const int COLS = 5;

using namespace std;

void getMatrix(char (&matrix)[COLS][ROWS]);
void printMatrix(char (&matrix)[COLS][ROWS]);

int main() {
    for (size_t i = 0; i < 3; i++) {
        char matrix[COLS][ROWS];
        getMatrix(matrix);
        printMatrix(matrix);
    }
    return 0;
}

void getMatrix(char (&matrix)[COLS][ROWS]) {
    int sI = sizeof(matrix) / sizeof(*matrix);
    int sJ = sizeof(matrix) / sI;

    // cout << "I: " << sI << endl;
    // cout << "J: " << sJ << endl;

    for (int i = 0; i < sI; i++) {
        for (int j = 0; j < sJ; j++) {
            int r = (rand() % 1000) + 1;
            // long int r = time(NULL), rNew = time(NULL);
            // while (r == rNew) {
            //     rNew = time(NULL);
            // }

            // cout << r << " | " << (r % 2) << endl;
            if (r % 2 == 0) {
                matrix[i][j] = '1';
            } else {
                matrix[i][j] = '0';
            }
        }
    }
}

void printMatrix(char (&matrix)[COLS][ROWS]) {
    int sI = sizeof(matrix) / sizeof(*matrix);
    int sJ = sizeof(matrix) / sI;

    // cout << "I: " << sI << endl;
    // cout << "J: " << sJ << endl;

    cout << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < sI; i++) {
        for (int j = 0; j < sJ; j++) {
            cout << matrix[i][j] << " | ";
        }
        cout << endl;
    }
    cout << "-------------------------------------------------------------------------------------" << endl;
}