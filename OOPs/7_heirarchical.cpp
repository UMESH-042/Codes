#include <bits/stdc++.h>
using namespace std;
// Heirarchical Inheritance
class A
{

public:
    void fun1()
    {
        cout << "Calling function 1" << endl;
    }
};

class B : public A
{
public:
    void fun2()
    {
        cout << "calling function 2" << endl;
    }
};

class C : public A
{
public:
    void fun3()
    {
        cout << "Calling function 3" << endl;
    }
};
 int main()
{

B obj1;
obj1.fun1();
obj1.fun2();
C obj2;
obj2.fun1();
obj2.fun3();

    return 0;
}