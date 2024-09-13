#include "s21_matrix_oop.h"
using namespace std;

void S21MATRIX::MulMatrix(const S21MATRIX& other) {
	for (int i = 0; i < rows_; i++) {
		for (int j = 0; j < cols_; j++) {
			matrix_[i][j] *= other.matrix_[i][j];
		}
	}
}