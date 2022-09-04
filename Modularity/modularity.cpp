#include <iostream>
using namespace std;
double sqrt(double);

class Vector
{
private:
    double *elem;
    int size;

public:
    Vector(int size);
    double &operator[](int i);
    int getSize();
};

Vector::Vector(int s)
    :elem(new double[s]), size(s){

    }
double& Vector::operator[](int i ){
    return elem[i];
}
int Vector::getSize(){
    return size;
}
int main()
{
}