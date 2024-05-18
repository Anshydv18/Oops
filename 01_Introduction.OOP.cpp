#include<bits/stdc++.h>
using namespace  std;

class employee{
    
};

class Rao{
    public:
    string name;
    int age;
    Rao(string name,int age){
        this->name=name;
        this->age=age;
    }
};

int main(){
    employee obj;
    cout<<sizeof(obj)<<endl;
    Rao ram("Ram",55);
    cout<<ram.name<<" "<<ram.age<<endl;
    Rao* ans = new Rao("Ansh",22);
    cout<<ans->name<<endl;
    cout<<ans->age<<endl;
    
}

/* when a object empty and we have initailised it then it takes 1  byte to show his existance*/