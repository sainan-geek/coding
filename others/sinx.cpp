# include<iostream>
# include<cmath>
using namespace std;
int main()
{
    double y;
    int i,x,tmpX;

    for (y = 1; y >=-1; y-=0.1)
    {
        tmpX=abs(asin(y))*10;
        if (y>=0)
        {
            for (x<0;x<tmpX;x++)
            cout<<"";
            cout<<"*"<<endl;
        }
        else
        {
            for (x=0;x<31+tmpX;x++)
            cout<<"";
            cout<<"*"<<endl;
            for (; x <=62-tmpX; i++)
             cout<<"";
            cout<<"*"<<endl;    
        }
        return 0;
    }
    
}