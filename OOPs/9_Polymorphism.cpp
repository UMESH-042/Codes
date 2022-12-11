#include<bits/stdc++.h>
using namespace std;


class A{
    public:

    void sayHello(){
        cout<<"HELLO!"<<endl;
    }

    void sayHello(string name){
        cout<<"Hii "<<name<<endl;
    }
     int sayHello(int n){
        cout<<"Hii Umesh"<<endl;
        return n;
    }
};
     int main() {

A obj;
obj.sayHello();
// obj.sayHello("umesh");

return 0;
}