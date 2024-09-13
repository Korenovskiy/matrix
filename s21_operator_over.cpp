#include "s21_matrix_oop.h"
using namespace std;

S21MATRIX S21MATRIX::operator+(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.SumMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator-(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.SubMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator*(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.MulMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator==(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.EqMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator=(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.SumMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator+=(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.SumMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator-=(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.SumMatrix(other);
	return result;
}

S21MATRIX S21MATRIX::operator*=(const S21MATRIX& other) {
	S21MATRIX result(*this);
	result.SumMatrix(other);
	return result;
}