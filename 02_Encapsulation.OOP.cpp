// encapsulation is the wrapping up  data and information in a single unit, we achive the encapsultion by marking it private
// we access and modify the element by using getter and setter function

#include<bits/stdc++.h>
using namespace std;

class price{
    private:
    string product;
    int val;
    public:
    price(string name, int val){
        this->product=name;
        this->val=val;
    }
    string product_name(){
        return this->product;
    }
    int priceOfProduct(){
        return this->val;
    }
    void increasePrice(){
        this->val=this->val+1;
    }
};

int main(){

    price obj("oap",10);
    cout<<obj.product_name()<<endl;
    cout<<obj.priceOfProduct()<<endl;
    obj.increasePrice();
    cout<<obj.priceOfProduct()<<endl;
    //cout<<sizeof(obj)<<endl;
}