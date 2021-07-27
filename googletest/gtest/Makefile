GTEST_DIR=googletest/googletest

all:
	g++ -o main main.cc problem.cpp
	# g++ -o main main.cc sum.cc

test:
	g++ -o user_test utest.cpp problem.cpp -isystem ${GTEST_DIR}/include -L${GTEST_DIR}/build -pthread -lgtest
	./user_test
