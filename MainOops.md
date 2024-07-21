## the two ways for defining the objects
```
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    Student(string name="Ansh",int age=10){
        this->name=name;
        this->age=age;
    }
}A,B;
// the object of A and B in the global scope;

void checkingScope(){
    cout<<A.name<<endl;
}

int main(){
    Student c;
    //another way of making object or instance of the class
    cout<<A.name<<endl;
    cout<<B.age<<endl;
    checkingScope();
}
```

defining the memeber function form outside the class using scope resolution operator

```
#include <iostream>
using namespace std;
/* defining a member function*/
class Student{
    string name;
    int age;
    // i  have initialised the function, i can define in this class , as well as from outside the class using scope resolution
    public:
    string getname();
};
// defining the method function outside the class
string Student::getname(){
    return "Ansh";
};
int main() {
    Student A;
    cout<<A.getname<<endl;
}

```

## Use of static funtion
we can use static funtion directly by taking scope of its class
```
// static data member and member function

#include <iostream>
using namespace std;
class Swayam{
    int data;
   // static int peroson=12;
    public:
    static int NumberOfTeachers(){
        return 4;
    }
};
int main() {
    cout<<Swayam::NumberOfTeachers()<<endl;
}

```