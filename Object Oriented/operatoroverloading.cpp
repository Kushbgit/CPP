#include<iostream>
using namespace std;

class Complex{
     private:
         int real,imaginary;
     public:
         
         Complex(int a,int b){
               real=a;
               imaginary=b;
         }
     Complex operator +(Complex obj){
              Complex temp(0,0);
              temp.real+real+obj.real;
              temp.imaginary=imaginary+obj.imaginary;
              return temp;
         }
     void display(){
        cout<<"Real :"<<real<<endl;
        cout<<"Imaginary :"<<imaginary<<endl;
     }

};
    

int main()
{
    Complex c1(2,4),c2(3,6),c3(4,5);
    Complex c4=c1+c2+c3;
    c4.display();
}