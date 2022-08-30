
#include <iostream>
// #include <string>
#include <complex>
#include <vector>
 
using namespace std;

double square(double x)
{
    return x * x;
}
void print_square(double x)
{
    cout << "the square of " << x << "is " << square(x) << "\n";
}

double get(const vector<double> &vec, int index);
// char& string::operator[](int index);
constexpr double squarew(double x)
{
    return x * x;
};

void copy_fn(){
    int v1[10] = {1,2,3,4,5,6,7,8,9,0};
    int v2[10];
    for (auto i = 0; i < 10; i++)
    {
        v2[i] = v1[i];
    }
    cout<<*v2;
    
}

void print(){
    int v[] = {0,1,2,3,4,4,5,6,6,7,8,9};
    for(auto x: v){
        cout<<x<<'\n';
    }
    for (auto x:{6,7,8,9,3})
    {
        cout<<x<<'\n';
    }
    
}

void increment(){
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for(auto& x : v){
        ++x;
    }
    cout<<*v;
}


// double* pd = nullptr;
// Link<Record>* lst = nullptr;
// int x = nullptr;

int count_x(const char* p, char x){
    if (p == nullptr)
    {
        return 0;
    }
    int count = 0;
    for(;*p != 0;++p){
        if (*p == x)
        {
            ++count;
        }
        
    }
    return count;
    
}

int main()
{   
    int x = 9;
    int& r {x};
    r = 0;
    cout<<x;

    // const char v[10] ={'x','x','d','d','d','s','d','s','x','s'};
    // cout<<count_x(v, 'x');
    // increment();
    // print();
    // copy_fn();
    // std::cout<<"Hello World!\n";
    // print_square(1.23);
    // double d1 = 2.3;
    // double d2{2.2};
    // double d3 = {2.1};
    // complex<double> z = 1;
    // complex<double> z2{d1, d2};
    // complex<double> z3 = {d1, d2};
    // // cout<<z2;
    // vector<int> v{1, 2, 3, 4, 5, 6};
    // // int i1 = 7.8;// warning
    // // cout<<i1;
    // // int i2 {5.7}; error
    // // cout<<i2;、
    // auto b = true;
    // auto ch = 'x';
    // auto i = 123;
    // auto d = 1.2;
    // auto zz = sqrt(4);
    // auto bb{true};
    // constexpr int dmv = 12;
    // int var{17};
    // const double sqv = sqrt(var);
    // // double sum(const vector<double>&);
    // vector<double> vv{1, 2, 3.4};
    // // const double s1 = sum(vv);

    // constexpr double max1 = 1.4 * squarew(12);
    // // constexpr double max2 = 1.4 * squarew(var); // error : var is not a constant expression
    // const double max3 = 1.4 * squarew(var);

    // char cs[6];
    // char* p = &cs[3];
    // char xx = *p;

//    copy_fn();
}
