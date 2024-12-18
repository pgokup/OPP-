#include<iostream>
using namespace std;

class complex {
    private:
    double real;
    double img;
    public:
    complex(double r=0.0, double i=0.0) : real(r),img(i){}

    complex operator + (const complex& other) const{
        return complex(real+other.real,img+other.img);
    }

    complex operator * (const complex& other) const {
        return complex((real*other.real-img*other.img),(real*other.img+img*other.real));
    }

    friend ostream& operator << (ostream& out , const complex& c ){
        out<<c.real;
        if (c.img >=0){
            out<<"+"<<c.img<<"i";
        }else{
            out<<"-"<<-c.img<<"i";
        }
        return out;
    }

    friend istream& operator >> (istream& in, complex& c ){
        cout<<"Enter real part of the complex number :";
        in >> c.real;
        cout<<"Enter img part of the complex number :";
        in >> c.img;
        return in ;
    } 
};

int main (){
    complex c1,c2,c3,c4;

    cout<<"Enter first complex number :"<<endl;
    cin>>c1;
    cout<<"\nEnter second complex number:"<<endl;
    cin>>c2;

    c3=c1+c2;
    cout << "\nSum is :"<<c3;

    c4=c1*c2;
    cout<< "\nMultiplication is :"<<c4;

    return 0;
}
