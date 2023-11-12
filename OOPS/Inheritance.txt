// Online C++ compiler to run C++ program online
//inheritance
#include <iostream>
using namespace std;
class Animal
{
    public:
    int age;
    int weight;
    void eat()
    {
        cout<<"eating"<<endl;
    }
};
class Dog:private Animal
{
    public:
    void access()
    {
       
        cout<<this->age;
    }
    
};

int main()
{
    Dog d1;
 
    // d1.eat();
    d1.access();
    
  


    return 0;
}