#include <variant>
#include <iostream>

using namespace std;
//------------------------------------
// struct Vector
// {
//     int size;
//     double* elem;
// };

// void vector_init(Vector& v, int size){
//     v.elem = new double[size];
//     v.size = size;
// }

// double read_and_sum(int size){
//     Vector v;
//     vector_init(v, size);
//     for(int i =0; i != size; ++i){
//         cin>>v.elem[i];
//     }
//     double sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += v.elem[i];
//     }
//     return sum;
    
// }
// void f(Vector v, Vector& rv, Vector* pv){
//     int int1 = v.size;
//     int int2 = rv.size;
//     int int3 = pv->size;
// }

// int main(){
//     Vector v;
//     cout<<v.size;
//     cout<<read_and_sum(3);
// }
//------------------struct done-----------------------

class Vector {
    private:
        double* elem;
        int size;
    public:
        Vector(int size):elem(new double[size]),size(size){};
        double& operator[](int i){return elem[i];}
        int getSize(){return size;}
};

double read_and_sum(int size) {
    Vector v(size);
    for (int i = 0; i < size; i++)
    {
        cin>>v[i];
    }
    cout<<v.getSize();
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += v[i];
    }
    return sum;
    
}

enum Type {
    ptr,
    num,
};
struct Node {
    int q;
};

struct Entry {
    string name;
    Type t;
    Node* p;
    int i;
};
void f(Entry* pe){
    if (pe->t == num)
    {
        cout << pe->i;
    }
    
}

union Value {
    Node* p ;
    int i;
};
struct EntryUnion {
    string name;
    Type t;
    Value v;
};
void fUnoin(EntryUnion* pe) {
    if (pe->t == num)
    {
        cout<<pe->v.i;
    }
    
}

struct EntryVariant{
    string name;
    variant<Node*, int> v;
};
void fVariant(EntryVariant* pe){
    if (holds_alternative<int>(pe->v))
    {
        cout<<get<int>(pe->v);
    }
    
};
enum class Color { red, blue , green };
enum class Traffic_light { green, yellow, red };

Traffic_light& operator++(Traffic_light& t){
    switch (t)
    {
    case Traffic_light::green:
        return t=Traffic_light::yellow;
    case Traffic_light::yellow:
        return t=Traffic_light::red;
    case Traffic_light::red:
        return t=Traffic_light::green;
    }
}

int main(){
    Vector v(6);
    // red;
    Color col = Color::red;
Traffic_light light = Traffic_light::red;
Color x = Color{5}; // OK, but verbose
Color y {6};
    // cout<<read_and_sum(3);;
    // cout<<x;
    Traffic_light next = ++light;
}

