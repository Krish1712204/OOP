#include<iostream>
using namespace std;
class shape
{
    public:
    double d1,d2;
    void get_data()
    {
        cout<<"enter base:"<<endl;
        cin>>d1;
        cout<<"enter height:"<<endl;
        cin>>d2;
    }
    virtual void calculate_area()=0;
};
class triangle :public shape{
    public:
        void calculate_area()
        {
            cout<<"area of triangle: "<<0.5*d1*d2<<endl;
        }
};
class rectangle : public shape{
    public:
    void calculate_area()
    {
        cout<<"area of rectangle :"<<d1*d2<<endl;
    }
};
int main()
{
    triangle t;
    rectangle r;
    int choice,ch;

    do
    {
        cout<<"menu\n""1.calculate area of triangle\n""2.calculate area of rectangle\n"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            t.get_data();
            t.calculate_area();
            break;

            case 2:
            r.get_data();
            r.calculate_area();
            break;
        }
        cout<<"Do you want to continue(0/1):"<<endl;
        cin>>ch;
    }while(ch==1);
  
  
  return 0;
}