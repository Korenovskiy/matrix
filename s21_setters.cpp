#include "s21_matrix_oop.h"
using namespace std;

void S21MATRIX::GetRows() {
	cout << rows_ << "\n";
}

void S21MATRIX::GetCols() {
	cout << cols_ << "\n";
}

void S21MATRIX::SetRows(int a) {
	if (a < 1) {
		throw runtime_error("ÍÅÄÎÏÓÑÒÈÌÎÅ ÇÍÀ×ÅÍÈÅ\n");
	}
	rows_ = a;
}

void S21MATRIX::SetCols(int a) {
	if (a < 1) {
		throw runtime_error("ÍÅÄÎÏÓÑÒÈÌÎÅ ÇÍÀ×ÅÍÈÅ\n");
	}
	cols_ = a;
}