#include "s21_matrix_oop.h"
using namespace std;

void S21MATRIX::SubMatrix(const S21MATRIX& other) {
	if (rows_ != other.rows_ || cols_ != other.cols_) {
		throw runtime_error("Ќельз€ вычитать матрицы разного размера.\n");
	}
	for (int i = 0; i < rows_; i++) {
		for (int j = 0; j < cols_; j++) {
			matrix_[i][j] -= other.matrix_[i][j];
		}
	}
}