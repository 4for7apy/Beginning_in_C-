// #include<iostream>
// using namespace std;

// int fun1(int num1, int num2){
//     return num1+num2;
// }

// int fun1(int num1, int num2, int num3){
//     return num1*num2*num3;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n; i++){

//     }
// }



// #include<iostream>
// using namespace std;

// int global = 5;

// void display(){
//     cout << global << endl;
// }


// int main(){
//     display();
//     global = 10;
//     display();
// }


// #include<iostream>
// using namespace std;

// class Sample{
//     int a,b;
//     public:
//     void get(){
//         cout << "Enter the two number " << endl
//         cin >> a >> b;
//     }
// }

// void swap(sample s1){
//     int temp = s1.a;
//     s1.a = s1.b;
//     s1.b = temp;
//     cout << "a= " << s1.a << "and " << "b= " << s1.b << endl;
// }


// #include<iostream>
// using namespace std;

// class Second;
// class first{
//     int a;
//     void get(){
//         cout << "Enter the value of a: ";
//         cin >> a;

//         friend void swap(first.second);
//     }
// };

// class Second{
//     int b;
//     void get(){
//         cout << "Enter the value of b: ";
//         cin >> b;

//     }
// }



// #include<iostream>
// using namespace std;

// class Second;
// class first{
//     int a;
//     void get(){
//         cout << "Enter the value of a: ";
//         cin >> a;
//         }
//         public:
//             void greatest(Second);
// };

// class Second{
//     int b;
//     void get(){
//         cout << "Enter the value of b: ";
//         cin >> b;
        
//     }
//     friend void first :: greatest(Second);
// };




// #include<iostream>
// using namespace std;


// class Test1{
//     int a,b;
//     public:
//     friend class Test2;
//     void getab(){
//         cout << "Enter a and b Values: ";
//         cin >> a >> b;
//     }
// };

// class Test2{
//     public:
//     void putab(Test1){
//         cout << "a= " << Test1.a << endl;
//         cin >> "b= " << Test2.b << endl;
        
//     }
// };

// int main(){
//     Test1 T1;
//     Test2 T2;

//     T1.getab();
//     T2.putab(T1);
// }


struct employee
{
    profile p
};



