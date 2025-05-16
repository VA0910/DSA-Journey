//Revisiting OOPs
#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        void introduce(){
            cout<<"Hi, I am "<<name<<endl;
        }
    };

class Employee: public Person{
    public:
        int employeeID;
        void work(){
            cout<<name<<" is working. Employee ID- "<<employeeID<<endl;

        }
    };

class Shape{
    public:
    virtual void draw(){//runtime polymorphism
        cout<<"Drawing generic shape"<<endl;
    
    }
};
class Circle: public Shape{
    public:
    void draw() override {
        cout<<"Drawing a circle"<<endl;
    }
};

int main(){
    Employee e;
    e.name="Vaish";
    e.employeeID= 123;
    e.introduce();
    e.work();

    Shape* s;
    Circle c;
    s= &c;
    s->draw();
}
