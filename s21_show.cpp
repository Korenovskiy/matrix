#include "s21_matrix_oop.h"
using namespace std;

void S21MATRIX::printMatrix() const {
	for (int i = 0; i < rows_; i++) {
		for (int j = 0; j < cols_; j++) {
			cout << matrix_[i][j] << " ";
		}
		cout << endl;
	}
}