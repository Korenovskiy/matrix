#include "s21_matrix_oop.h"
using namespace std;

void S21MATRIX::MulNumber(const double num) {
	for (int i = 0; i < rows_; i++) {
		for (int j = 0; j < cols_; j++) {
			matrix_[i][j] *= num;
		}
	}
}