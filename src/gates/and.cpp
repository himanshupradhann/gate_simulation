#include <iostream>

class Gates{
    public :
        bool a;
        bool b;
};

int main(){
    Gates and;
    and.a=true;
    and.b=false;

    cout<<and.a;
    return 0;
}