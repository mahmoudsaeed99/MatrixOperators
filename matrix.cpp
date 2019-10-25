#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <valarray>
#include <ios>
#include <bits/ostream_insert.h>

using namespace std;
 matrix::   matrix()
{
    row = 0, col = 0;
    data.resize(0*0);
}

 istream& operator>>(istream &in , matrix &mat){
    cout<<"enter row then coloum\n";
    in>>mat.row>>mat.col;
    mat.data.resize(mat.row*mat.col);
    for(int i=0 ; i<mat.row ; i++)
    {
        for(int j=0 ; j<mat.col ; j++)
        {
            in>>mat.data[i*mat.col+j];
        }
    }
    return in;
}

 ostream& operator<< (ostream& out, matrix mat){
    int x[mat.row][mat.col],y=0,b=0;
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            x[i][j]=mat.data[b];
            b++;
            out<<setw(4)<<x[i][j];
        }
            out<<endl;}
    return out;
}

void createMatrix (int row, int col, int num[], matrix& mat) {
       mat.row = row;
       mat.col = col;
       mat.data.resize (row * col);
       for (int i = 0; i < row * col; i++){
         mat.data [i] = num [i];}
}

  matrix operator+= (matrix& mat1, matrix mat2){
if(mat1.row == mat2.row && mat1.col==mat2.col){
   cout<<"{";
for(int i=0;i< mat1.row *mat1.col;i++){
    mat1.data[i]+=mat2.data[i];
    cout<<mat1.data[i]<<",";
}
cout<<"}";
return mat1;}

else {cout<<"those matrices cant add to each other"<<endl;}
}
 matrix operator-= (matrix& mat1, matrix mat2){
if(mat1.row == mat2.row && mat1.col==mat2.col){
   cout<<"{";
for(int i=0;i< mat1.row *mat1.col;i++){
    mat1.data[i]+=mat2.data[i];
    cout<<mat1.data[i]<<",";
}
cout<<"}"<<endl;;}

else {cout<<"those matrices cant add to each other"<<endl;}
}

matrix operator+= (matrix& mat, int scalar){
    cout<<"{";
for(int i=0;i< mat.row *mat.col;i++){
    mat.data[i]+=scalar;
    cout<<mat.data[i]<<",";
}
cout<<"}";
}

 matrix operator-= (matrix& mat, int scalar){
    cout<<"{";
for(int i=0;i< mat.row *mat.col;i++){
    mat.data[i]-=scalar;
    cout<<mat.data[i]<<",";
}
cout<<"}";
}
    void operator++ (matrix& mat){

        cout<<"{";
for(int i=0;i<(mat.col*mat.row);i++){
mat.data[i]+=1;
cout<<mat.data[i]<<",";
}
cout<<"}";
}

 void operator-- (matrix& mat){
        cout<<"{";
for(int i=0;i<(mat.col*mat.row);i++){
mat.data[i]-=1;
cout<<mat.data[i]<<",";
}
cout<<"}";
}

 void operator+(matrix mat1,matrix mat2){
    matrix mat4;
    mat4.row=mat1.row;
    mat4.col=mat1.col;
    mat4.data.resize(mat1.row*mat1.col);
    if (mat1.row==mat2.row && mat1.col==mat2.col){
    cout << "{";
for (int i =0;i<mat1.row*mat1.col;i++){

    mat4.data[i]=mat1.data[i]+mat2.data[i];
    cout<<mat4.data[i]<<",";

}
cout << "}";}
else{cout<<"syntax error"<<endl;}
}

 matrix operator-(matrix mat1,matrix mat2){
    matrix mat4;
    mat4.row=mat1.row;
    mat4.col=mat1.col;
    mat4.data.resize(mat1.row*mat1.col);
    if (mat1.row==mat2.row && mat1.col==mat2.col)
    cout << "{";
for (int i =0;i<mat1.row*mat1.col;i++){

    mat4.data[i]=mat1.data[i]-mat2.data[i];
    cout<<mat4.data[i]<<",";

}
cout << "}";
return mat4;
}

  matrix operator+(matrix mat1,int scalar){
    matrix mat4;
    mat4.row=mat1.row;
    mat4.col=mat1.col;
    mat4.data.resize(mat1.row*mat1.col);
    cout << "{";
for (int i =0;i<mat1.row*mat1.col;i++){

    mat4.data[i]=mat1.data[i]+scalar;
    cout<<mat4.data[i]<<",";

}
cout << "}";
return mat4;
 }

 matrix operator-(matrix mat1,int scalar){
    matrix mat4;
    mat4.row=mat1.row;
    mat4.col=mat1.col;
    mat4.data.resize(mat1.row*mat1.col);
    cout << "{";
for (int i =0;i<mat1.row*mat1.col;i++){

    mat4.data[i]=mat1.data[i]-scalar;
    cout<<mat4.data[i]<<",";

}
cout << "}";
return mat4;
}

 matrix operator*(matrix mat1,int scalar){
    matrix mat4;
    mat4.row=mat1.row;
    mat4.col=mat1.col;
    mat4.data.resize(mat1.row*mat1.col);
    cout << "{";
for (int i =0;i<mat1.row*mat1.col;i++){

    mat4.data[i]=mat1.data[i]*scalar;
    cout<<mat4.data[i]<<",";

}
cout << "}";
return mat4;
}
 bool operator==(matrix mat1, matrix mat2){
    int x=0;
    if(mat1.row == mat2.row && mat1.col==mat2.col){
  for (int i = 0; i <=mat1. row * mat1.col; i++){
   if( mat1.data[i] != mat2.data[i]){
                x++;
        }}

if(x==0){
    return true;
}
else{return false;}}
else{return false;}

}

 bool operator!=(matrix mat1, matrix mat2){
    int x=0;
    if(mat1.row == mat2.row && mat1.col==mat2.col){
  for (int i = 0; i <=mat1. row * mat1.col; i++){
   if( mat1.data[i] != mat2.data[i]){
                x++;
        }}
if(x==0){
    return false;
}
else{return true;}}
else{return false;}

}

  bool isSquare   (matrix mat){
if(mat.row==mat.col){
    return true;
}
else{return false;}
}

 bool isIdentity (matrix mat){
if(mat.row==mat.col){
    int x[mat.row][mat.col],y=0,a=0,b=0;
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            x[i][j]=mat.data[b];
            b++;
        }}
        for(int i=0;i<mat.col;i++){
         y+=x[i][i];
        }
        for(int i=0;i<mat.row;i++){
            for(int j=0;j<mat.col;j++){
               a+=x[i][j];
}
}
if(a-y==0&& y%3==0){
    return true;
}
else{return false;}
}
else{return false;}
}

 bool isSymetric (matrix mat){
    if(mat.row==mat.col){
    int x[mat.row][mat.col],y=0,b=0;
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            x[i][j]=mat.data[b];
            b++;
        }}
     for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            if(x[i][j]==x[j][i]){
                y++;
            }
        }
     }
     if(y==mat.col*mat.row){
        return true;
     }
     else{return false;}

}
else{return false;}
}

 matrix transpose(matrix mat){
if(mat.row==mat.col){
    int x[mat.row][mat.col],y=0,b=0;
    for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
            x[i][j]=mat.data[b];
            b++;
        }}

     for(int i=0;i<mat.row;i++){
        for(int j=0;j<mat.col;j++){
                    cout<<setw(4)<<x[j][i];}
                    cout<<endl;
}
}
else{cout<<"syntax error";;}
}



