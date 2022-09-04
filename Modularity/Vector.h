class Vector
{
private:
    double* elem;
    int sz;   
public:
    Vector(int s);
    double& operator[](int i);
    int size();
};

 
