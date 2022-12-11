#include <bits/stdc++.h>
using namespace std;

// Heirarchical Inheritance
class A
{

public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B" << endl;
    }
};

class C : public A, public B
{

public:
};


int main()
{

    C obj;
    obj.A::func();
    obj.B::func();

    return 0;
}