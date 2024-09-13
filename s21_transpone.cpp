#include "s21_matrix_oop.h"
using namespace std;

void S21MATRIX::Transpone() const {
	for (int i = 0; i < rows_; i++) {
		for (int j = 0; j < cols_; j++) {
			double save = matrix_[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = save;
		}
	}
}