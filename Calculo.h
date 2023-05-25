#ifndef CALCULO_H
#define CALCULO_H

#include <iostream>
class Calculo
{
    public:
        float SumX (float x[9])
        {
            float result=0;
            for(int i= 0;i < 9;i++)
                result +=x[i];
            //cout <<"SumX:"<<result<<endl;
            return result;
        }
        float SumY (float y[9])
        {
            float result=0;
            for(int i=0;i < 9;i++)
                result +=y[i];
            //cout <<"SumY:"<<result<<endl;
            return result;
        }
        float SumXY (float x[9], float y[9])
        {
            int result=0;
            for(int i=0;i < 9;i++)
                result +=(y[i]*x[i]);
            //cout <<"SumXY:"<<result<<endl;
            return result;
        }
        float SumsqrtX (float x[9])
        {
            float result=0;
            for(int i=0;i < 9;i++)
                result +=(x[i]*x[i]);
            //cout <<"SumsqrtX:"<<result<<endl;
            return result;
        }
        float B1 (float x[9],float y[9])
        {
            float result=0;
            result = ((9*SumXY(x,y))-(SumX(x)*SumY(y)))/((9*SumsqrtX(x))-(SumX(x)*SumX(x)));
            //cout <<"B1"<<result<<endl;
            return result;
        }
        float B0 (float x[9],float y[9])
        {
            float result=0;
            result=(SumY(y)-(B1(x,y)*SumX(x)))/9;
            return result;
        }

    protected:

    private:
};

#endif // CALCULO_H
