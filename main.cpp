#include <iostream>
#include "Calculo.h"
using namespace std;

int main()
{
    Calculo calculo;
    float x[9]={1,2,3,4,5,6,7,8,9};
    float y[9]={2,4,6,8,10,12,14,16,18};
    
    //float y[9]={651,762,856,1063,1190,1298,1421,1440,1518};
    //float x[9]={23,26,30,34,43,48,52,57,58};
    cout << "El resultado de B0 es: " << calculo.B0(x,y)<<endl;
    cout << "El resultado de B1 es: " << calculo.B1(x,y)<<endl;


    
    return 0;
}

