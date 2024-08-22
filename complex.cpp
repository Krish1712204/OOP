#include<iostream>
using namespace std;
class complex
{
    public:
    int real,imag;
    complex()
    {
        real=0;
        imag=0;
    }

    //overloaded input operator
    friend istream& operator>>(istream& input,complex&v)
    {
        cout<<"enter real and imag";
        input>>v.real>>v.imag;
        return input;
    }

    //overloaded output operator
    friend ostream& operator<<(ostream& output,const complex& v)
    {
        output<<v.real<<"+"<<v.imag<<"i";
        return output;
    }

    //overloaded addition operator
    complex operator+(const complex& v)
    {
        complex temp;
        temp.real=real+v.real;
        temp.imag=imag+v.imag;
      return temp;
    }
    complex operator*(const complex& v)
    {
        complex temp;
        temp.real=(real*v.real)-(imag*v.imag);
        temp.imag=(real*v.imag)+(imag*v.real);
        return temp;
    }
};

int main()
{
    complex c1,c2,c3,c4;
    cin>>c1;
    cin>>c2;
    c3=c1+c2;
    cout<<"complex number addition is:"<<c3<<endl;
    c4=c1*c2;
    cout<<"complex number multiplication is:"<<c4<<endl;

    return 0;
}