CC == g++ -Wall -Werrir -Wextra 

TEST = *.cpp *.h
CLANG = clang-gormat
.PHONY: all clean test rebuild

all: 
	${CC} main.cpp s21_constructor_copy.cpp s21_constructor.cpp s21_eqMatrix.cpp s21_matrix_oop.h s21_min.cpp s21_mul.cpp s21_muls.cpp s21_operator_over.cpp s21_setters.cpp s21_show.cpp s21_sum.cpp s21_transpone.cpp -o abc

clean:
	rm -rf *.o *.a *.out
