#include<iostream>
using namespace std;
class matrix{
    public:
    int A[10][10],B[10][10],C[10][10];
    int x,y,a,b;

    void accept()
    {
        cout<<"enter no. of rows for matrix A:"<<endl;
        cin>>x;
        cout<<"enter no of columns for matrix A:"<<endl;
        cin>>y;
        cout<<"enter no of rows for matrix B:"<<endl;
        cin>>a;
        cout<<"enter no of columns for matrix B:"<<endl;
        cin>>b;

        try{
            if(x>10||y>10)
            {
                throw 1;
            }
        }
        catch(int)
        {
            cout<<"enterd array size is greater than size of array for matrix A"<<endl;
            return;
        }
        try{
            if(a>10||b>10)
            {
                throw 2;
            }
        }
        catch(int)
        {
            cout<<"enterd array size is greater than size of array for matrix A"<<endl;
        }
    }

    void acceptMatrix()
    {
        cout<<"enter elements for matrix A:"<<endl;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<"enter elements for matrix B:"<<endl;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>B[i][j];
            }
        }
    }
    void addmatrix()
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                C[i][j]=A[i][j]+B[i][j];

            }
        }
        cout<<"addition of matrix:"<<endl;
        displaymatrix(C);
    }
    void submatrix()
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
            }
        }
        cout<<"subtraction of matrix:"<<endl;
        displaymatrix(C);
    }

    void mulmatrix()
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<b;j++)
            {
                C[i][j]=0;
                for(int k=0;k<y;k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];

                }
            }
        }
        cout<<"multiplication of matrix :"<<endl;
        displaymatrix(C);
    }
    void displaymatrix(int mat[10][10])
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cout<< mat[i][j]<<" ";
            }
        cout<<endl;
        }
    }
};
int main()
{
    matrix m;
    m.accept();
    m.acceptMatrix();
    m.addmatrix();
    m.submatrix();
    m.mulmatrix();
    return 0;

}