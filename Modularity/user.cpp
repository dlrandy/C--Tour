#include "Vector.h"
// #include <cmath>

double sqrt_sum(Vector& v)
{
    double sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i]; 
    }
    return sum;
}
// int main(){
    
// }
