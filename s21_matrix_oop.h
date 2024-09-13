#if !defined(S21_MATRIX_OOP)
#define S21_MATRIX_OOP

#include <iostream>
#include <cmath>
using namespace std;


class S21MATRIX {
private:
	int rows_, cols_;
	double** matrix_;
	void printMatrix() const;
public:
	S21MATRIX();
	S21MATRIX(int rows, int cols);
	S21MATRIX(const S21MATRIX& other);
	~S21MATRIX();
	void SumMatrix(const S21MATRIX& other);
	void SubMatrix(const S21MATRIX& other);
	void MulNumber(const double num);
	void MulMatrix(const S21MATRIX& other);
	bool EqMatrix(const S21MATRIX& other);
	void Transpone() const;

	void GetRows();
	void GetCols();

	void SetRows(int a);
	void SetCols(int a);
};

#endif