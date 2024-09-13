#include "s21_matrix_oop.h"
using namespace std;

bool S21MATRIX::EqMatrix(const S21MATRIX& other) {
	bool a = true;
	if (rows_ != other.rows_ || cols_ != other.cols_) {
		//throw runtime_error("Матрицы не равны\n");
		a = false;
	}
	if (flag = true) {
		for (int i = 0; i < rows_; i++) {
			for (int j = 0; j < cols_; j++) {
				if (matrix_[i][j] != other.matrix_[i][j]) {
					a = false;
					break;
				}
			}
			if (a == false) {
				break;
			}
		}
	}
	return a;
}