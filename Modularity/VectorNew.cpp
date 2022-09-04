module;
export module Vector;

export class Vector {
    private:
        double* elem;
        int sz;   
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
};
Vector::Vector(int s):elem(new double[s]),sz(s){}

double& Vector::operator[](int i) {
    return elem[i];
}

int Vector::size(){
    return sz;
}

export int size(Vector& v){return v.size();}
