
//Single Inheritance

#include<bits/stdc++.h>
using namespace std;

class Animal{

public:
int age;
int weight;

public:
void bark(){

    cout<<"Barking"<<endl;
} 

};

class Human{
    public:
 string color;


    public:

    void speak(){
        cout<<"Speaking"<<endl;
    }
};
// multiple Inheritance
class hybrid: public Animal,public Human{

};

     int main() {
hybrid obj;
obj.bark();
obj.speak();

cout<<obj.color<<endl;
cout<<obj.age<<endl;




return 0;
}