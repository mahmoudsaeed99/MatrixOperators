#include <iostream>
#include <iomanip>
#include <valarray>
#include <ctime>
#include "matrix.h"
#include <ios>
#include <bits/ostream_insert.h>

using namespace std;

int main()
{
matrix mat1,mat2,mat3;

int scalar;
cin >> mat1;
cout << mat1;
cin >> mat2;
cout << mat2;
cout << "Enter a scalar :"<<endl;
cin >> scalar;
mat1+=mat2;
mat1-=mat2;
//mat1+=scalar;
//mat1-=scalar;
//operator++(mat1);
//operator--(mat1);
//operator+(mat1,mat2);
//operator-(mat1,mat2);
//operator+(mat1,scalar);
//operator-(mat1,scalar);
//operator*(mat1,2);
//operator==(mat1,mat2);
//operator!=(mat1,mat2);
//cout<<isSquare(mat1);
//cout<<isIdentity(mat1);
//cout<<isSymetric(mat1);
//cout<<transpose(mat1);




    return 0;
}
