#include<iostream>
using namespace std;

class Student{
    protected:
    int id;
    public:
    void getID(){
        cout << "enter id: ";
        cin >> id;
    }

    void printID(){
        cout << "ID: " << id << endl;
    }
};

class testmarks: public virtual student{
    protected:
    float mark1, mark2;
    public:
    void getmarks(){
        cout << "Enter mark1: ";
        cin >> mark1;

        if(mark1 < 0 || mark1 > 0){
            cout << "Invalid mark1. only enter values between 0 and 100" << endl;
        }

        cout << "Enter mark2";
        cin >> score
    }

    void printscore(){
        
    }
}

int main(){

}