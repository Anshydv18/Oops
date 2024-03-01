#include<bits/stdc++.h>
using namespace std;

class books{
    public:
    string name;
    
    books(string name){
        this->name=name;
    }

    //we have both default copy, constructor *** when we make our own function they all vanish 
    
    books(books &b){ //pass the parameter with the pass with refrence other it will fall in infinte loop ,  in every value it will try copy its value, so it reaches to the infinite recursion 
     string name = b.name;
     this->name = name;
     //this process is deep copy without providing the other things
    
    }
    //default constructor make shallow copy means , if we change one than it affect other also
    

    //destructor is defaultly present in the class to free the data

    ~books(){
        cout<<"destructor is called"<<endl;
    }
    //destructor is called only for the static allocation done  , not for the dynamic allocations of memory
    
};

int main(){
    books res("maths");
    books maa(res);
    res.name[0]='A';
    cout<<res.name<<endl;
    cout<<maa.name<<endl;

    books *bb = new books("kk");
    delete bb;
    return 0;
}
