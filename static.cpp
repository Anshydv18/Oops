#include<bits/stdc++.h>
using namespace std;
class books{
    public:
    string name;
    static int prices;

    static int getvalue(){
        return prices;
    }
};

int books::prices=10;
//static depend upon the class not objects
/*{static function can only acess the static variables}*/

int main(){
    cout<<books::prices<<endl;
    cout<<books::getvalue()<<endl;
}