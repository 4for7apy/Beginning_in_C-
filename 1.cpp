#include<iostream>
using namespace std;

class Sum{
    public:
    int a;
    int b;

    void mySum();
};

void Sum::mySum(){
    cout << "Hi mai aagaya" << endl;
}

int main(){
    Sum s;
    s.mySum();
    return 0;
}