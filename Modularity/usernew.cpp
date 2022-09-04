// TODO 编译不过去😓
import Vector;
#include <cmath>

double sqrt_sum(Vector& v){
    double sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += std::sqrt(v[i]);
    }
    return sum;
}
int main(){
    
}
