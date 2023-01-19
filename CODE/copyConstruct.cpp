#include<iostream>
using namespace std;

// class Demo{
//     public:
//     int x;
//     Demo(int a){
//         x = a;
//     }
//     Demo(Demo &i){
//         cout<<"Copy Constructor"<<endl;
//         x = i.x;
//     }
// };

// int main(){
//     Demo a1(10);
//     Demo a2(a1);
//     cout<<"Value of x is "<<a2.x<<endl;
// }

// COPY CONSTRUCTOR
// Copy constructor is member function which initializes an object using another object of the same class.  
// IMP*******
// When no copy constructor is found, compiler supllies its own copy constructor


class Number{
    int a;
    public:
        Number(){
            a = 0;
        };
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            cout<<"Copy constructor called!!"<<endl;
             a = obj.a;
        }
        void display(){
            cout<<"Number for this object is "<<a<<endl;
        }
};

int main(){
    Number x, y, z(5),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);   //Copy consructor invoked
    z1.display();

    z2 = z; //Copy constructor not called

    Number z3 = z;   //Copy constructor is invoked
    z3.display();
}