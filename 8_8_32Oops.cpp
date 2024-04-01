#include<iostream>
using namespace std;

class abc{
    int x,y;
    public:
    void getdata(){
        cout << "Enter the values of X an Y:" << endl;
        cin >> x >> y;
    }
    void sum(){
        int z = x+y;
        cout << "The sum is: " << z;
    }
};

int main(){
    abc obj1;
    obj1.getdata();
    obj1.sum();
}