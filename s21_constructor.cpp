#include "s21_matrix_oop.h"
using namespace std;

S21MATRIX::S21MATRIX() : S21MATRIX(1, 1){   }

S21MATRIX::~S21MATRIX() {
	rows_ = NULL;
	cols_ = NULL;
	matrix_ = NULL;
}

S21MATRIX::S21MATRIX(int rows, int cols) {
	if (rows < 1 || cols < 1) {
		throw runtime_error("Нельзя создать матрицу такиго размера.");
	}
	rows_ = rows;
	cols_ = cols;

	try {
		matrix_ = new double* [rows_] {};
		for (int i = 0; i < rows_; i++) {
			matrix_[i] = new double[cols]();
		}
	}
	catch (bad_alloc&) {
		rows_ = 0;
		cols_ = 0;
		std::cout << "Неудалось выделить память";
	};
}