/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#ifndef MATRIX_H
#define MATRIX_H
template<typename Type>
class Matrix {
public:
    Matrix(int height, int width) : _height(height), _width(width) {
        _matrix = new Type* [_height];
        for(int i=0; i<_height; ++i){
            _matrix[i] = new Type[_width];
        }
    }

    ~Matrix(){
        for(int i=0; i<_height; ++i){
            delete[] _matrix[i];
        }
        delete[] _matrix;
    }

    void setElement(int row, int col, Type value) {
        _matrix[row][col] = value;
    }

    void setIdentityMatrix() {
        for(int i=0; i<_height; ++i){
            for(int j=0; j<_width; ++j){
                if(i==j) {
                    _matrix[i][j] = 1;
                }
                else {
                    _matrix[i][j] = 0;
                }
            }
        }
    }

    void setZeroMatrix() {
        for(int i=0; i<_height; ++i){
            for(int j=0; j<_width; ++j){
                _matrix[i][j] = 0;
            }
        }
    }

    Type** getMatrix() {
        arr=new Type*[_height]
        for(int i=0, i<height, ++i) {
            arr[i]=new Type[_width];
        }
        for(int i=0; i<_height; ++i){
            for(int j=0; j<_width; ++j){
                arr[i][j]=_matrix[i][j];
            }
        }
        return arr;
    }

    Type getElement(int row, int col) {
        return _matrix[row][col];
    }

    Matrix<Type> transpone() {
        Matrix<Type> resultMatrix(_width,_height);
        for(int i=0; i<_height; ++i){
            for(int j=0; j<_width; ++j){
                resultMatrix.setElement(i,j,this.getElement(j,i));
        }
        return resultMatrix;
    }

    Matrix<Type> operator+(Matrix<Type> other) {
        Matrix<Type> resultMatrix(_height,_width);
        for(int i=0; i<_height; ++i){
            for(int j=0; j<_width; ++j){
                resultMatrix.setElement(i,j,this.getElement(i,j)+other.getElement(i,j));
            }
        }
        return resultMatrix;
    }

    Matrix<Type> operator*(Type scalar) {
        Matrix<Type> resultMatrix(_height,_width);
        for(int i=0; i<_height; ++i){
            for(int j=0; j<_width; ++j){
                resultMatrix.setElement(i,j,this.getElement(i,j)*scalar);
            }
        }
        return resultMatrix;
    }

    Matrix<Type> operator*(Matrix<Type> other) {
        Matrix<Type> resultMatrix(_height,other.getWidth());
        for(int i=0; i<_height; ++i){
            for(int j=0; j<other.getWidth(); ++j){
                Type value=0;
                for(int k=0; k<_width; ++k){
                    value+=this.getElement(i,k)*other.getElement(k,j)
                }
                resultMatrix.setElement(i,j,value);
            }
        }
        return resultMatrix;
    }

private:
    int _width;
    int _height;
    Type** _matrix;
};
#endif
