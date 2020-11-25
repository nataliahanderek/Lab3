#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <string.h>

class matrix {

    double **tab;
    int a, b;

    public:

    matrix(int n, int m);
    matrix(int n);
    matrix Matrix(std::string path);
    void set(int x, int y, double val);
    double get(int x, int y);
    matrix add(matrix tablica3);
    matrix substract(matrix tablica3);
    matrix multiply(matrix tablica4);
    int rows();
    int cols();
    void print();
    matrix store(std::string filename, std::string path);

};