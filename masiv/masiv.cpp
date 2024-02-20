#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> inputMatrix(int rows, int cols) {

    vector<vector<double>> matrix;
    for (int i = 0; i < rows; i++) {
        vector<double> row;
        cout << "Введите " << cols << " элементов для строки " << i + 1 << ": ";
        for (int j = 0; j < cols; j++) {
            double element;
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
    return matrix;
}

double averageOfRow(vector<double> row) {
    double sum = 0;
    for (double element : row) {
        sum += element;
    }
    return sum / row.size();
}

int main() {
    setlocale(LC_ALL, "RUS");
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    vector<vector<double>> matrix = inputMatrix(rows, cols);

    vector<double> averages;
    for (vector<double> row : matrix) {
        averages.push_back(averageOfRow(row));
    }

    for (int i = 0; i < averages.size(); i++) {
        cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << averages[i] << endl;
    }

    return 0;
}