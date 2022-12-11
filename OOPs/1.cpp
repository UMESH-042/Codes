#include <bits/stdc++.h>
// #include "hero.cpp"

using namespace std;

class hero
{

     int health;

     // private: // can be accessed inside the class only not outside the class or in the main function
public: // access modifiers
char *name;
     char level;

     static int TimetoComplete;

static int Random(){
     // cout<<this->health<<endl;
     cout<<TimetoComplete<<endl;// it can access only static members 
}
     void print()
     {    
          cout << "Level is :- " << this->level << endl;
          cout << "Health  is :- " << this->health << endl;
          cout<<" Name is :- "<<this->name<<endl;
     }

     // default constructor
     hero()
     {
          name=new char[100];
          cout << "Constructor called" << endl;
     }

     // copy constructor

     hero(hero &temp)
     {

          cout << "Copy constructor called" << endl;
          this->health = temp.health;
          this->level = temp.level;
     }

     // paramerterised constructor

     hero(int health)
     {
          cout << "this ->" << this << endl;
          this->health = health;
     }

     hero(int health, char level)
     {
          cout << "this ->" << this << endl;
          this->health = health;
          this->level = level;
     }

     int gethealth()
     {
          return health;
     }

     char getlevel()
     {
          return level;
     }

     void sethealth(int h)
     {
          health = h;
     }

     void setlevel(char l)
     {
          level = l;
     }

     void setname(char name[]){
          strcpy(this->name,name);
     }

     ~hero(){
          cout<<"Destructor called"<<endl;
     }

     // protected:
};

int hero::TimetoComplete=5;
int main()
{


// hero hero1;
// hero1.sethealth(70);
// hero1.setlevel('A');
// // char name[8]="umesh";
// hero1.setname("Umesh");



// // use default copy constructor

// hero hero2(hero1);

// hero2.print();
// hero1.print();

// static
hero a;

cout<<a.TimetoComplete<<endl;

cout<<hero::TimetoComplete<<endl;

// dynamic
hero *b=new hero();

b->TimetoComplete=10;

cout<<a.TimetoComplete<<endl;
cout<<b->TimetoComplete<<endl;

// have to call destructor manually for dynamic allocation
delete b;



     // hero suresh(70, 'C');
     // suresh.print();

     // // R.health=suresh.health;
     // // R.level=suresh.level;

     // // copy constructors
     // hero R(suresh); // this line symbolizes the above given two lines
     // R.print();

     // creation of object

     //      // this is static allocation
     //      cout << "HI" << endl;
     //      hero umesh;

     //      // dynamically allocated;
     //      hero *b = new hero();
     //      b->setlevel('A');
     //      b->sethealth(50);

     //      cout << "Health is :-" << (*b).gethealth() << endl;
     //      cout << "Level is :-" << (*b).level << endl;

     //      // or

     //      cout << "Health is :-" << b->gethealth() << endl;
     //      cout << "Level is :-" << b->level << endl;

     // hero ramesh(10);
     // ramesh.print();
     // cout<<"Address of Ramesh is :-"<<&ramesh<<endl;

     // hero temp(10,'a');
     // temp.print();
     //      // umesh.health = 50;
     //      // umesh.level = 'U';

     //      // using setter
     //      // umesh.sethealth(50);
     //      // umesh.setlevel('a');
     //      // cout << "size :- " << sizeof(umesh) << endl;

     //      // // using getter
     //      // cout << "Health is :- " << umesh.gethealth() << endl;
     //      // cout << "Level is :- " << umesh.getlevel() << endl;

     return 0;
}