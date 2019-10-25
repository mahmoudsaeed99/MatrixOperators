#ifndef MATRIX_H
#define MATRIX_H
#include <valarray>
#include<iostream>
#include <ios>
#include <bits/ostream_insert.h>

using namespace std;
class matrix {

public:

    valarray<int> data;
    int row, col;
    matrix();
  matrix(int x,int z)
{
    row=x;
    col=z;
    data.resize(x*z);
}

friend istream& operator>>(istream &in , matrix &mat);//cin any matrix
friend ostream& operator<<(ostream &in , matrix mat);// to cout any matrix
 void createMatrix (int row, int col, int num[], matrix& mat);//creat new matrix
 friend matrix operator+= (matrix& mat1, matrix mat2);//add mat1 to mat2
 friend matrix operator-= (matrix& mat1, matrix mat2);//mat1-mat2
friend matrix operator+= (matrix& mat, int scalar);//operator add scalar to mat
friend matrix operator-= (matrix& mat, int scalar);//minus scalar to mat
friend void operator++ (matrix& mat);//add a mtrix
friend void operator-- (matrix& mat);//minus a matrix
friend void operator+(matrix mat1,matrix mat2);//add mat1 and mat2 in mat1
friend matrix operator-(matrix mat1,matrix mat2);//minus two matrix
friend matrix operator+(matrix mat1,int scalar);//operator add scalar to mat
friend matrix operator-(matrix mat1,int scalar);//minus scalar to mat
 friend matrix operator*(matrix mat1,int scalar);//mat1 * scalar
  friend bool operator==(matrix mat1, matrix mat2);//check if mat1==mat2
  friend bool operator!=(matrix mat1, matrix mat2);//check if mat1 != mat2
  friend bool isSquare   (matrix mat);// check if mat is square
  friend bool isIdentity (matrix mat);// check if mat is identity
  friend bool isSymetric (matrix mat);// check if mat is symetric
  friend matrix transpose(matrix mat);// make traspose to matrix
};

#endif // MATRIX_H
