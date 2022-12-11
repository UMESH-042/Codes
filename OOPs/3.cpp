// Inheritance.cpp

#include <bits/stdc++.h>
using namespace std;

class Human
{

// private:
public:
// protected:
    int height;
    int weight;
    // private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};


// Inheritance in public mode
class Male : public  Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main()
{

    Male obj;

    // cout<<obj.age<<endl;
    // cout<<obj.weight<<endl;
    // cout<<obj.height<<endl;
    // cout<<obj.color<<endl;

    // obj.setWeight(55);
    // cout<<obj.weight<<endl;
    // obj.sleep();
cout<<obj.getHeight()<<endl;


    return 0;
}