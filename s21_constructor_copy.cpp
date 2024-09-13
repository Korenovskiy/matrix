#include "s21_matrix_oop.h"
using namespace std;

S21MATRIX::S21MATRIX(const S21MATRIX& other) : S21MATRIX(other.rows_, other.cols_) {
	for (int i = 0; i < rows_; i++) {
		for (int j = 0; j < cols_; j++) {
			matrix_[i][j] = other.matrix_[i][j];
		}
	}
}
