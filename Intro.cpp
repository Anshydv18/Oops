//object can be said that is self defined data type
//the total size of that object is equal the datatypes used in that object
//if the object is empty than it take size 1

#include<bits/stdc++.h>
#include "hero.cpp"
using namespace std;

// object
//we can use object object from different file by importing form other place
class  hero{
    public:
    string name;
    bool zinda;
    int level=11;

   //getter and setter
   //setter is used to set the value

   void setName(string ss){
    name=ss;
   }

   void setZinda(bool rr){
    zinda=rr;
   }

   void setLevel(int ll){
    level=ll;
   }

   string getName(){
    return name;
   }

   bool getZinda(){ return zinda;}

   bool getLevel(){return level;}

   hero(){
    cout<<"called"<<endl;
   }
};

int main(){
    hero ansh;
    ansh.name="Ansh";
    ansh.zinda=true;
    
    //static allocation 

    hero  res;

    //dynaically allocated

    hero *rep = new hero;

    rep->setName("Ram");

    cout<<rep->name<<endl;

    cout<<ansh.level<<endl;

}


/*
acess modifier 
there are 3 access modifier  1->private : by default everything in object is private only
                             2->public  : we have set it public for acessing it from everywhere
                             3->protected


parametrised constructor --> every object have default constructor , 
we can built a constructor by passing a value or parameter, than it is parametrised constructor

*/
