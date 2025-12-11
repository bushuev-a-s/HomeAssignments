/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#include <gtest/gtest.h>
#include "Matrix.h"
#include "Rational.h"

TEST(Rational, TestInvariance) {
    EXPECT_EQ(Rational(1,2),Rational(2,4));
    EXPECT_EQ(Rational(3,4),Rational(-3,-4));
    EXPECT_EQ(Rational(5,6),Rational(-10,-12));
    EXPECT_EQ(Rational(0,1),Rational(0,52));
    EXPECT_EQ(Rational(-7,8),Rational(7,-8));
    EXPECT_EQ(Rational(-9,10),Rational(18,-20));
    Rational a=5;
    EXPECT_EQ(a,Rational(5,1));
    EXPECT_EQ(a,Rational(25,5));
    Rational b=0;
    EXPECT_EQ(b,Rational(0,1));
    EXPECT_EQ(b,Rational(0,52));
}

TEST(Rational, TestOperations) {
    EXPECT_EQ(Rational(1,4)+Rational(1,6),Rational(5,12));
    EXPECT_EQ(Rational(1,4)-Rational(1,6),Rational(1,12));
    EXPECT_EQ(Rational(3,4)*Rational(5,6),Rational(15,24));
}

TEST(Matrix, TestRingAxioms) {
    Matrix<Rational> a(2,2);
    Matrix<Rational> b(2,2);
    Matrix<Rational> c(2,2);
    a.setElement(1,1,Rational(1,5));
    a.setElement(1,2,Rational(2,6));
    a.setElement(2,1,Rational(3,7));
    a.setElement(2,2,Rational(4,8));
    b.setElement(1,1,Rational(9,13));
    b.setElement(1,2,Rational(10,14));
    b.setElement(2,1,Rational(11,15));
    b.setElement(2,2,Rational(12,16));
    c.setElement(1,1,Rational(17,21));
    c.setElement(1,2,Rational(18,22));
    c.setElement(2,1,Rational(19,23));
    c.setElement(2,2,Rational(20,24));
    EXPECT_EQ(a+b,b+a);
    EXPECT_EQ((a+b)+c,a+(b+c));
    Matrix<Rational> zero(2,2);
    zero.setZeroMatrix();
    EXPECT_EQ((a-a,zero);
    EXPECT_EQ((a*b)*c,a*(b*c));
    EXPECT_EQ((a+b)*c,a*c+b*c);
    EXPECT_EQ(c*(a+b),с*a+c*b);
    Matrix<Rational> identity(2,2);
    identity.setIdentityMatrix();
    EXPECT_EQ(a*identity,a);
    EXPECT_EQ(identity*a,a);
    EXPECT_EQ(a*zero,zero);
    EXPECT_EQ(zero*a,zero);
    EXPECT_EQ((-1)*a,-a);
}

TEST(Matrix, TestIntTranspone) {
    Matrix<int> matrix(2,3);
    matrix.setElement(1,1,1);
    matrix.setElement(1,2,2);
    matrix.setElement(1,3,3);
    matrix.setElement(2,1,4);
    matrix.setElement(2,2,5);
    matrix.setElement(2,3,6);
    Matrix<int> expect(3,2);
    expect.setElement(1,1,1);
    expect.setElement(1,2,4);
    expect.setElement(2,1,2);
    expect.setElement(2,2,5);
    expect.setElement(3,1,3);
    expect.setElement(3,2,6);
    Matrix<int> test=matrix.transpone()
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestFloatTranspone) {
    Matrix<float> matrix(2,3);
    matrix.setElement(1,1,1.5);
    matrix.setElement(1,2,2.5);
    matrix.setElement(1,3,3.5);
    matrix.setElement(2,1,4.5);
    matrix.setElement(2,2,5.5);
    matrix.setElement(2,3,6.5);
    Matrix<float> expect(3,2);
    expect.setElement(1,1,1.5);
    expect.setElement(1,2,4.5);
    expect.setElement(2,1,2.5);
    expect.setElement(2,2,5.5);
    expect.setElement(3,1,3.5);
    expect.setElement(3,2,6.5);
    Matrix<float> test=matrix.transpone()
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestRatTranspone) {
    Matrix<Rational> matrix(2,3);
    matrix.setElement(1,1,Rational(1,2));
    matrix.setElement(1,2,Rational(2,2));
    matrix.setElement(1,3,Rational(3,2));
    matrix.setElement(2,1,Rational(4,2));
    matrix.setElement(2,2,Rational(5,2));
    matrix.setElement(2,3,Rational(6,2));
    Matrix<Rational> expect(3,2);
    expect.setElement(1,1,Rational(1,2));
    expect.setElement(1,2,Rational(4,2));
    expect.setElement(2,1,Rational(2,2));
    expect.setElement(2,2,Rational(5,2));
    expect.setElement(3,1,Rational(3,2));
    expect.setElement(3,2,Rational(6,2));
    Matrix<Rational> test=matrix.transpone()
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestIntAddition) {
    Matrix<int> a(2,3);
    a.setElement(1,1,1);
    a.setElement(1,2,2);
    a.setElement(1,3,3);
    a.setElement(2,1,4);
    a.setElement(2,2,5);
    a.setElement(2,3,6);
    Matrix<int> b(2,3);
    b.setElement(1,1,6);
    b.setElement(1,2,5);
    b.setElement(1,3,4);
    b.setElement(2,1,3);
    b.setElement(2,2,2);
    b.setElement(2,3,1);
    Matrix<int> expect(2,3);
    expect.setElement(1,1,7);
    expect.setElement(1,2,7);
    expect.setElement(1,3,7);
    expect.setElement(2,1,7);
    expect.setElement(2,2,7);
    expect.setElement(2,3,7);
    Matrix<int> test=a+b;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestFloatAddition) {
    Matrix<float> a(2,3);
    a.setElement(1,1,1.5);
    a.setElement(1,2,2.5);
    a.setElement(1,3,3.5);
    a.setElement(2,1,4.5);
    a.setElement(2,2,5.5);
    a.setElement(2,3,6.5);
    Matrix<float> b(2,3);
    b.setElement(1,1,6.5);
    b.setElement(1,2,5.5);
    b.setElement(1,3,4.5);
    b.setElement(2,1,3.5);
    b.setElement(2,2,2.5);
    b.setElement(2,3,1.5);
    Matrix<float> expect(2,3);
    expect.setElement(1,1,8);
    expect.setElement(1,2,8);
    expect.setElement(1,3,8);
    expect.setElement(2,1,8);
    expect.setElement(2,2,8);
    expect.setElement(2,3,8);
    Matrix<float> test=a+b;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestRatAddition) {
    Matrix<Rational> a(2,3);
    a.setElement(1,1,Rational(1,2));
    a.setElement(1,2,Rational(2,2));
    a.setElement(1,3,Rational(3,2));
    a.setElement(2,1,Rational(4,2));
    a.setElement(2,2,Rational(5,2));
    a.setElement(2,3,Rational(6,2));
    Matrix<Rational> b(2,3);
    b.setElement(1,1,Rational(6,2));
    b.setElement(1,2,Rational(5,2));
    b.setElement(1,3,Rational(4,2));
    b.setElement(2,1,Rational(3,2));
    b.setElement(2,2,Rational(2,2));
    b.setElement(2,3,Rational(1,2));
    Matrix<Rational> expect(2,3);
    expect.setElement(1,1,Rational(7,2));
    expect.setElement(1,2,Rational(7,2));
    expect.setElement(1,3,Rational(7,2));
    expect.setElement(2,1,Rational(7,2));
    expect.setElement(2,2,Rational(7,2));
    expect.setElement(2,3,Rational(7,2));
    Matrix<Rational> test=a+b;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestIntScalarMultiplication) {
    Matrix<int> a(2,3);
    a.setElement(1,1,1);
    a.setElement(1,2,2);
    a.setElement(1,3,3);
    a.setElement(2,1,4);
    a.setElement(2,2,5);
    a.setElement(2,3,6);
    Matrix<int> expect(2,3);
    expect.setElement(1,1,2);
    expect.setElement(1,2,4);
    expect.setElement(1,3,6);
    expect.setElement(2,1,8);
    expect.setElement(2,2,10);
    expect.setElement(2,3,12);
    Matrix<int> test=a*2;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestFloatScalarMultiplication) {
    Matrix<float> a(2,3);
    a.setElement(1,1,1.5);
    a.setElement(1,2,2.5);
    a.setElement(1,3,3.5);
    a.setElement(2,1,4.5);
    a.setElement(2,2,5.5);
    a.setElement(2,3,6.5);
    Matrix<float> expect(2,3);
    expect.setElement(1,1,0.15);
    expect.setElement(1,2,0.25);
    expect.setElement(1,3,0.35);
    expect.setElement(2,1,0.45);
    expect.setElement(2,2,0.55);
    expect.setElement(2,3,0.65);
    Matrix<float> test=a*0.1;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestRatScalarMultiplication) {
    Matrix<Rational> a(2,3);
    a.setElement(1,1,Rational(3,2));
    a.setElement(1,2,Rational(6,2));
    a.setElement(1,3,Rational(9,2));
    a.setElement(2,1,Rational(12,2));
    a.setElement(2,2,Rational(15,2));
    a.setElement(2,3,Rational(18,2));
    Matrix<Rational> expect(2,3);
    expect.setElement(1,1,1);
    expect.setElement(1,2,2);
    expect.setElement(1,3,3);
    expect.setElement(2,1,4);
    expect.setElement(2,2,5);
    expect.setElement(2,3,6);
    Matrix<Rational> test=a*Rational(2,3);
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestIntMatrixMultiplication) {
    Matrix<int> a(2,4);
    a.setElement(1,1,1);
    a.setElement(1,2,2);
    a.setElement(1,3,3);
    a.setElement(1,4,4);
    a.setElement(2,1,5);
    a.setElement(2,2,6);
    a.setElement(2,3,7);
    a.setElement(2,4,8);
    Matrix<int> b(4,3);
    b.setElement(1,1,1);
    b.setElement(1,2,2);
    b.setElement(1,3,3);
    b.setElement(2,1,4);
    b.setElement(2,2,5);
    b.setElement(2,3,6);
    b.setElement(3,1,7);
    b.setElement(3,2,8);
    b.setElement(3,3,9);
    b.setElement(4,1,10);
    b.setElement(4,2,11);
    b.setElement(4,3,12);
    Matrix<int> expect(2,3);
    expect.setElement(1,1,70);
    expect.setElement(1,2,80);
    expect.setElement(1,3,90);
    expect.setElement(2,1,158);
    expect.setElement(2,2,184);
    expect.setElement(2,3,210);
    Matrix<int> test=a*b;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestFloatMatrixMultiplication) {
    Matrix<float> a(2,4);
    a.setElement(1,1,1.5);
    a.setElement(1,2,2.5);
    a.setElement(1,3,3.5);
    a.setElement(1,4,4.5);
    a.setElement(2,1,5.5);
    a.setElement(2,2,6.5);
    a.setElement(2,3,7.5);
    a.setElement(2,4,8.5);
    Matrix<float> b(4,3);
    b.setElement(1,1,1.5);
    b.setElement(1,2,2.5);
    b.setElement(1,3,3.5);
    b.setElement(2,1,4.5);
    b.setElement(2,2,5.5);
    b.setElement(2,3,6.5);
    b.setElement(3,1,7.5);
    b.setElement(3,2,8.5);
    b.setElement(3,3,9.5);
    b.setElement(4,1,10.5);
    b.setElement(4,2,11.5);
    b.setElement(4,3,12.5);
    Matrix<float> expect(2,3);
    expect.setElement(1,1,87);
    expect.setElement(1,2,99);
    expect.setElement(1,3,111);
    expect.setElement(2,1,183);
    expect.setElement(2,2,211);
    expect.setElement(2,3,239);
    Matrix<float> test=a*b;
    EXPECT_EQ(test,expect);
}

TEST(Matrix, TestRatMatrixMultiplication) {
    Matrix<Rational> a(2,4);
    a.setElement(1,1,Rational(1,2));
    a.setElement(1,2,Rational(2,2));
    a.setElement(1,3,Rational(3,2));
    a.setElement(1,4,Rational(4,2));
    a.setElement(2,1,Rational(5,2));
    a.setElement(2,2,Rational(6,2));
    a.setElement(2,3,Rational(7,2));
    a.setElement(2,4,Rational(8,2));
    Matrix<Rational> b(4,3);
    b.setElement(1,1,Rational(1,2));
    b.setElement(1,2,Rational(2,2));
    b.setElement(1,3,Rational(3,2));
    b.setElement(2,1,Rational(4,2));
    b.setElement(2,2,Rational(5,2));
    b.setElement(2,3,Rational(6,2));
    b.setElement(3,1,Rational(7,2));
    b.setElement(3,2,Rational(8,2));
    b.setElement(3,3,Rational(9,2));
    b.setElement(4,1,Rational(10,2));
    b.setElement(4,2,Rational(11,2));
    b.setElement(4,3,Rational(12,2));
    Matrix<Rational> expect(2,3);
    expect.setElement(1,1,Rational(35,2));
    expect.setElement(1,2,Rational(40,2));
    expect.setElement(1,3,Rational(45,2));
    expect.setElement(2,1,Rational(79,2));
    expect.setElement(2,2,Rational(92,2));
    expect.setElement(2,3,Rational(105,2));
    Matrix<Rational> test=a*b;
    EXPECT_EQ(test,expect);
}
