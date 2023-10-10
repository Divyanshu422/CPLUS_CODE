
//! Basic Syntax
// #include<iostream>
// using namespace std;
// int main(){
//  cout<< "Hello world" << endl;    //* Here endl is used as Enter. Note: endl is not used in double quotes

//  cout<< "Hello world! This is Divyanshu";
//  cout<< "\n Thanks for visiting ";  //* here \n is also used as Enter. here the /n need to be in double quotes
//    return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! String vs Integer value
// #include <iostream>
// using namespace std;

// int main()
// {
//   cout << "4\n"                   // * Treat 4 as string  -> 4
//        << 4 + 3 << "\n"           // * Mathematical calculation -> 7
//        << "4" + to_string(3)      // * concatenation: need to convert the interger to
// *  string using to_string method
//        << "\n 4+3" ;              // * O/p 4+3
//   return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Chapter variable in C++
//  #include <iostream>
// using namespace std;

// int main(){
//     int age = 20 ;            // *Declaring and initializing  an integer variable named 'age'
//     double salary = 5000000;      // * Declaring  and initializing  a double variable named 'salary'
//     char grade = 'A+';   // * Declaring and initializing a character variable named 'grade'
//     string name = "Sajal";        // *Declaring and initializing  a string variable named 'name'
//     bool isStudent = true;     // * Declaring and initializing a boolean variable named 'isStudent'

// * Declaring multiple variable in Single line of Same type:
//     int a = 10, b = 20;
// }

//* -------------------------------------------------------------------------------------------------

//! Operator:
// #include <iostream>
// using namespace std;
// int main()
// {
//   float  x = 11, y = 2;
//   cout << x + y << endl; //* 13
//   cout << x - y << endl; //* 9
//   cout << x * y << endl; //* 22
//   cout << x / y << endl; // * 5.5

// }

//* -------------------------------------------------------------------------------------------------

//! Post & pre_ Increment Operator:
// #include <iostream>
// using namespace std;
// int main(){
//   int x = 10;
//   cout<<x++<<endl; // * Outputs 10 (first print then increments the value of x)
//   cout<<++x<<endl; // * Outputs 12 (increment the value of x and then prints)
//   cout<<x--<<endl;  // * Outputs 12 (first print then decrease the value of x)
//   cout<<--x<<endl;  // * Outputs 10 (first decrease then print value of x)
// }

//* -------------------------------------------------------------------------------------------------

//! User Input:

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number; // Declare an integer variable

//     cout << "Enter an integer1: ";       // Prompt user to enter an integer
//     cin >> number;                       // Read the entered integer
//     cout << "\nYou entered: " << number; // Display the entered integer
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Modulus operator: 2 Special cases

// #include<iostream>
// using namespace std;
// int main (){
//     cout<< 5%(-2)<< endl;       // *  1         [[ a % b ]]
//     cout<< -5%2;                // * -1        [[ - (a % b) ]]

// }

//* -------------------------------------------------------------------------------------------------

// ! Scope resolution Operator:
// #include<iostream>
// using namespace std;
//     int x = 10;                         //*  Global variable
//     int main (){
//         int x = 30;
//             //* Accessing the global variable x using the scope resolution operator
//         cout<<::x;              //*  10
//     }

//* -------------------------------------------------------------------------------------------------

//! TypeCasting Notes:

// #include<iostream>
// using namespace std;

// int main() {
//     float a = 34.4;
//     double b = 46.88;

//     cout << typeid(a).name() << endl;   // * Output: f -> denotes float
//     cout << typeid(b).name() << endl;   //  * Output: d -> denotes double

//     // * Checking the size using sizeof():
//     cout << "the size of 34.4 " << sizeof(34.4) << endl;         // * 8 -->> bydefault, it is considered as double
//     cout << "the size of 34.4f " << sizeof(34.4f) << endl;       // * 4
//     cout << "the size of 34.4F " << sizeof(34.4F) << endl;       // * 4
//     cout << "the size of 34.4L " << sizeof(34.4L) << endl;       // * 8
//     cout << "the size of 34.4l " << sizeof(34.4l) << endl;       // * 8

//     return 0;
// }

// * But when we pass the float value like 34.4 to a function -->> it will be treated as double. to make it float we need to add 'f' as suffix.
// * eg: 34.4f -->> f/F: denotes float
//*  eg: 34.4L --> L/l: denotes double

//* -------------------------------------------------------------------------------------------------

//! Reference variable:

// #include <iostream>
// using namespace std;

// int main() {
//     int originalVariable = 42;

//     //* Declaration of a reference variable
//     int & referenceVariable = originalVariable;

//     //* Accessing and modifying the original variable using the reference
//     referenceVariable = 56;

//     cout << "Original Variable: " << originalVariable << endl;     // * Output: Original Variable: 56
//     cout << "Reference Variable: " << referenceVariable << endl;   // * Output: Reference Variable: 56

//     referenceVariable++;        // * By modifying the referenceVariable, we are also modifying the originalVariable. Changes made to the reference are reflected in the original variable and vice versa.

//     cout << "Original Variable: " << originalVariable << endl;     // * Output: Original Variable: 57
//     cout << "Reference Variable: " << referenceVariable << endl;   // * Output: Reference Variable: 57

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! TypeCasting:

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     float y = 2.5;
//     float sum = x + y; //* Implicit typecasting: int x is promoted to float (output -> 7.5)

//     double pi = 3.14159265358979;
//     int intPi = static_cast<int>(pi); //* Explicit typecasting: Convert double to int (truncating decimal part)

//     // * Other ways of typecasting
//     int c = int(y);
//     int d = (int) y;
//     cout << "the typecasted value of intPi: " << intPi << endl;    //* 3
//     cout << "the typecasted value of c: " << c << endl;             //* 2
//     cout << "the typecasted value of d: " << d << endl;             //* 2

//     return 0;

// }

//* -------------------------------------------------------------------------------------------------

//!  Constants

// #include<iostream>
// using namespace std;
// int main(){

//     // * Defining the constant variable in C++:
//     const int max_size = 100; // * This will declare a read-only variable named 'max_size' with value = 100; Hence read only varibale can be changed

//     // max_size = 200;
//     // cout << max_size;  //* variable 'max_size' declared const here

//     return 0;

// }

//* -------------------------------------------------------------------------------------------------

//! Manipulators
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 123;
//     int c = 1234;
//     cout<<"the value of a without setw "<<a<<endl;
//     cout<<"the value of b without setw "<<b<<endl;
//     cout<<"the value of c without setw "<<c<<endl;
//     cout<<endl;

//     cout<<"the value of a with setw "<<setw(5)<<a<<endl;
//     cout<<"the value of b with setw "<<setw(5)<<b<<endl;
//     cout<<"the value of c with setw "<<setw(5)<<c<<endl;

//     return 0;

// }

//* -------------------------------------------------------------------------------------------------

//! Typecasting and Printing the ASCII value
//! printing the character based on the integer vale
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     char a = 'a';
//     char b = '9';
//     char c = 'A';

//     cout<<"The ASCII Value of a is "<< (int)a<<endl;            // * 97
//     cout<<"The ASCII Value of b is "<< (int)b<<endl;            // * 57
//     cout<<"The ASCII Value of c is "<< (int)c<<endl;            // * 65

//     // * Taking ascii value and printing the character
//     int d = 97;
//     cout<<"The int Value of d is "<< (char)d<<endl;             // * a

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Float and integer -> higher precedence to float
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<5/2<<endl;                // * 2
//     cout<<5.0/2<<endl;              // * 2.5
//     cout<<5/2.0<<endl;              // * 2.5
//     cout<<5.0/2.0<<endl;            // * 2.5

//     //! Case 2:

//     float a = 7/22*(3.14+2)*3/5;
//     cout<<a;                        //* 0

//                 //* solution a = 7/22*(3.14+2)*3/5;\
//                 //*  Step 1: 7/22*(5.14)*3/5;
//                 //*  Step 2: 0*(5.14)*3/5;               //Now precedence of / and * same. so the equation will be solved from left to right.hence 7/22 ===> 0

//    return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Home work:
// #include <iostream>
// using namespace std;

// int main(){
//     float d = 2/7;          // * 2 and 7 will be treated as int type
//     cout<<d;                //* 0

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! If-else statement
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "Enter a number";
//     cin >> x;
//     if (x > 1)
//     {
//         cout << "codition is true"; // PRINTING VLAUE
//     }
//     else
//     {
//         cout << "condition is false";
//     }
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! And and Or operator
// #include <iostream>
// using namespace std;

//     int main(){
//         int n;
//         cout<<" Enter the number";
//         cin>>n;
//         if (n>99 and n<1000){
//             cout <<"Number is 3 digit ";
//         }
//         else{
//             cout <<"Number is not 3 digit ";
//         }
//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! Ternary operator
// #include <iostream>
// using namespace std;

//     int main(){
//         int a;
//         cout<<"Enter a number: "<<endl;
//         cin>> a;

//         //* (condition) ? if true statement : if false statement
//         (a%2==0)? cout<<"Even" : cout<<"Odd";
//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! HomeWork
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 3, y, z;
//     y = x = 10;             //* x = 10 && y = 10. order of execution is Right to left.
//                             //* first the value to x is assigned then value to y is assigned
//     z = x < 10;             //* here x< 10 --> comparsion operator. so O/p is false or 0
//     cout << x << " " << y << " " << z; //* 10 10 0

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Loops: while loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     while (i < 3)
//     {
//         cout << "thanks for using while loop"<<endl;
//         i++;
//     }
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Do-while loop
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 0;
//     do {
//         cout << "Iteration " << i << endl;
//         i++;
//     } while (i < 5);

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Function overloading:
// #include <iostream>

// //* Function to add two integers
// int add(int a, int b)
// {
//     return a + b;
// }

// //* Function to add two doubles
// double add(double a, double b)
// {
//     return a + b;
// }

// int main()
// {
//     int intResult = add(3, 5);           //* Calls the int version of 'add'
//     double doubleResult = add(2.5, 3.7); //* Calls the double version of 'add'

//     std::cout << "Integer Result: " << intResult << std::endl;  // * 8
//     std::cout << "Double Result: " << doubleResult << std::endl; // * 6.2

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Global and Local variable
// #include <iostream>
// using namespace std;

// int a = 10; //* global variable
// int b = 20;
//     int main()
//     {
//         int b = 30;
//         cout << a << endl;          //* 10  [Accessing the global variable]
//         cout << b << endl;          //* 30 [Local variable higher precedence]
//         cout<<::b<<endl;            //* 20 [Scope resolution operator ::]

//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! Pass by value
// #include <iostream>
// using namespace std;

//     void modifyValue(int x){
//         x = x * 2;              //* Changes the local copy of 'x', not the original
//         cout << x << endl;          //* 10
//     }

//     int main(){
//         int num = 5;
//         modifyValue(num);
//         cout << "Original value: " << num << std::endl; //* Output: Original value: 5
//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! Pass by reference (&)
// #include <iostream>

//     void modifyReference(int &x) {
//         x = x * 2;                      //* Modifies the original value of 'x'
//     }

//     int main() {
//         int num = 5;
//         modifyReference(num);
//         std::cout << "Modified value: " << num << std::endl; //* Output: Modified value: 10
//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! Pass by reference
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 5;
//     int &y = num;        //* here the use of Ampersand -> signifies that y -> represent the num variable.
//     num++;
//     cout << y << endl;      //* 6
// }

//* -------------------------------------------------------------------------------------------------

//! Default parameter value:
// #include <iostream>

// //*  Function with default parameter values
//     void printMessage(std::string message = "Hello, World!") {
//         std::cout << message << std::endl;
//     }

//     int main() {
//         printMessage();                 //*  Uses the default message. output: Hello, World!
//         printMessage("Custom message"); //* Uses the provided message. output: Custom message
//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! ------------------------------    Pointers --------------------------------

// #include <iostream>
// using namespace std;

//     int main()
//     {
//         int num = 10;   //* Here variable is stored in memory not as num rather as an address. Let suppose the address be 120
//         cout<<num<<endl;      //* So there is a symbol table maintained by the complier which tells the address of the variable --->> num is 120.

//         return 0;
//     }

//* ---------------------------------------------------------------------------------------

//! printing the address of variable -> Not available in java
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10; //* Declared a variable
//     cout << "the address of the variable a is " << &a << endl;  //* 0x16ae8f3a8

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Declaring a pointer and storing a address
// #include <iostream>
// using namespace std;

// int main()
// {
//     // int b = 25; // declare an integer variable
//     // int *p = &b;
//     // //* int *p -> it is declaring a pointer. it is the bad practice, to not initialize the pointer.
//     // //* It is better to assign null value to pointer at the time of declaring if we are not assigning any address. i.e. int *p = null;
//     // cout << p;      //* 0x16f0bb3a8%

//     //! Pointer datatype:
//     char a = 'a';
//     int b = 100;
//     double d = 10.99;
//     int *p1 = &b;           //* Datatype of pointer p1 is int type
//     char *p2 = &a;          //* Datatype of pointer p2 is char type
//     double *p3 = &d;        //* Datatype of pointer p3 is double type

//     //! Dereferencing Pointer -> i.e. accessing the value
//     cout<<*p1<<endl;        //* 100
//     cout<<*p2<<endl;        //* a
//     cout<<*p3<<endl;        //* 10.99

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Love babar code
// #include<iostream>
// using namespace std;

// int main () {

//     int num  = 5 ;

//     cout << num << endl;                //* 5

//     // address of Operator - &

//     cout <<" address of num is " << &num << endl;       //* address of num is 0x16fc9b3a8

//     int *ptr = &num;

//     cout << "Address is : " << ptr << endl;             //* Address is : 0x16fc9b3a8
//     cout << "value is : " << *ptr << endl;              //* value is : 5

//     double d = 4.3;
//     double *p2 = &d;

//     cout << "Address is : " << p2 << endl;              //* Address is : 0x16fc9b398
//     cout << "value is : " << *p2 << endl;               //* value is : 4.3

//     cout << " size of integer is " << sizeof(num) << endl;      //* size of integer is 4
//     cout << " size of pointer is " << sizeof(ptr) << endl;      //*  size of pointer is 8
//     cout << " size of pointer is " << sizeof(p2) << endl;       //*  size of pointer is 8
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Love babbar -> lecture Pointer 25
// #include <iostream>
// using namespace std;

// int main()
// {
//*pointer to int is created, and pointing to some garbage address -->> int *p;
// int *p = 0;         //* Pointer pointing to zero -> acceptable

// cout << *p << endl;     //* o/p: segmentation fault. it means that there is no such pointer exist
// return 0;

// int i = 10;
// int *p = 0;
// p = &i;                          //* Note: *p = &i, this is wrong and p = &i -->> this is right
// cout << p << endl;              //* 0x16d8c33ac
// cout << *p << endl;             //* 10

// int *q = &i;
// cout << q << endl;              //* 0x16d8c33ac
// cout << *q << endl;             //* 10

//! Changing the value of variable using pointer?
// int a = 10;
// int *p = &a;
// *p = (*p + 10);
// cout << *p << endl; //* 20
// cout << a << endl;  //* 20

// (*p)++;
// cout << *p << endl; //* 21
// cout << a << endl;  //* 21

//! Copying a pointer
// int a = 10;
// int *p = &a;

// //* Copying a pointer
// int *q = p;
// cout << p << endl;  //* Address of a = 0x16d5973ac
// cout << *p << endl; //* Value of a = 10
// cout << q << endl;  //* Address of a = 0x16d5973ac
// cout << *q << endl; //* Value of a = 10

// //* ------------------- Modfying the value -------------------------------
// *p = (*p + 10);
// cout << p << endl;  //* Address of a = 0x16d5973ac
// cout << *p << endl; //* Value of a = 20
// cout << q << endl;  //* Address of a = 0x16d5973ac
// cout << *q << endl; //* Value of a = 20
// cout << a << endl;  //* Value of a = 20
// cout << &a << endl; //* Address of a = 0x16d5973ac

//! Arthimetic Note:
// int i = 10;
// int *p = &i;
//*  *p++;    ----->  Error
// (*p)++;
// cout << *p << endl; //* 11
// cout << i << endl;  //* 11
// cout << p << endl;  //* 0x16ef2b3ac

// //* Increasing the pointer
// p = p + 1;
// cout << p << endl; //* 0x16ef2b3b0: Here adding 1 means 4 byte add to previous address.
// cout << *p << endl; //* Garbage value
// }

//* -------------------------------------------------------------------------------------------------

//! Creating class and object
// #include <iostream>
// using namespace std;

// // Creating the class -> Hero with health as a property
//     class Hero {
//         // Property
//         int Health;

//     public:
//         // Constructor to initialize Health
//         Hero() {
//             Health = 0; // You can set an initial value here if needed
//         }

//         // Getter function to retrieve the Health value
//         int getHealth() {
//             return Health;
//         }

//         // Setter function to set the Health value
//         void setHealth(int newHealth) {
//             Health = newHealth;
//         }
//     };

//     int main() {
//         // Creating an object of the class
//         Hero Obj1;

//         // Accessing the property using setter
//         Obj1.setHealth(80); // Setting the initial value for health

//         // Accessing the property using getter and printing the value of health
//         cout << "Health: " << Obj1.getHealth() << endl;             //* Health: 80

//         // Printing the size of the object
//         cout << "Size of Obj1: " << sizeof(Obj1) << " bytes" << endl; //* Size of Obj1: 4 bytes

//         return 0;
//     }

//* -------------------------------------------------------------------------------------------------

//! Empty class -> Object size is not  zero rather 1 in C++
// #include<iostream>
// using namespace std;

// //* Creating the class -> Hero with health as a property
// class Hero
// {
//     //* Empty class
// };

// int main()
// {
//     //* Creating an object of the class
//     Hero Obj1;

//     //* Printing the size of the object
//     cout << "Size of Obj1: " << sizeof(Obj1) << " bytes" << endl; //* Size of Obj1: 1 bytes

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Importing Class -> Hero.cpp
// #include<iostream>
// #include "Hero.cpp" //* Including the Hero class
// using namespace std;

// int main()
// {
//     //* Creating an object of the class
//     Hero Obj1;

//     //* Printing the size of the object
//     cout << "Size of Obj1: " << sizeof(Obj1) << " bytes" << endl; //* Size of Obj1: 8 bytes

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Importing String in C++ Program
// #include <iostream>
// #include <string>

// int main() {
//     std::string myString = "Hello, World!";

//     std::cout << myString << std::endl;

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Access modifier -> Private vs Public
// #include <iostream>
// using namespace std;

// class LoveBabbar
// {
//     int RollNo;

// public:
//     int marks;
// };
// int main()
// {

//     //* Creating the object
//     LoveBabbar obj;
//     //* Accessing the field variable using dot operator
//     cout << obj.marks << endl;  //* Garbage value
//     cout << obj.RollNo << endl; //! Error becoz the RollNo is bydefault private
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Getter and Setter in C++
// #include <iostream>
// #include <string>
// using namespace std;

// class MyClass
// {
// private:
//     int myValue; //* Private data member

//     //? Access modifier -> Public
// public:
//     //* Getter method to retrieve the value
//     int getMyValue() const
//     { //! Need to use get keyword
//         return myValue;
//     }

//     //* Setter method to set the value
//     void setMyValue(int newValue)
//     { //! Need to use set keyword
//         //* You can add validation or business logic here
//         myValue = newValue;
//     }
// };

// int main()
// {

//     //* Creating the object
//     MyClass obj1;
//     obj1.setMyValue(5); //* Calling setter function
//     int value = obj1.getMyValue();
//     cout << value << endl;              //* 5
// }

//* -------------------------------------------------------------------------------------------------

//! Why the size of object is 8 not 5 -> Padding and greedy alignment
// #include <iostream>
// using namespace std;

// class MyClass
// {
// public:
//     int myvalue;
//     char marks;
// };

// int main()
// {
//     //* Creating the object
//     MyClass obj1;
//     cout << "Size of the obj1 of Myclass is " << sizeof(obj1) << endl; //* Size of the obj1 of Myclass is 8
// }

//* -------------------------------------------------------------------------------------------------

//! Dynamic allocation of variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *dynamicInt = new int; //* Dynamic allocation of an integer on the heap
//     *dynamicInt = 5;           //* Assign a value to the dynamically allocated integer

//     cout << *dynamicInt;            //* 5
//     //* Release the dynamically allocated memory to prevent memory leaks

//     delete dynamicInt;

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Dynamically allocating the object
// #include <iostream>
// using namespace std;

// class LoveBabbar
// {
// public:
//     int RollNo;
// };

// int main()
// {
//     //* Creating the object dynamically
//     LoveBabbar *obj = new LoveBabbar;
//     (*obj).RollNo = 10;    //* Access and assign a value to RollNo using (*obj)
//     cout << (*obj).RollNo; //* Output RollNo without the extra closing parenthesis.
//     //? output is 10.

//     //* Don't forget to delete dynamically allocated memory
//     delete obj;

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Dereferencing Meaning -> accessing the value using Pointer
// #include <iostream>
// using namespace std;

// int main()
// {
//     int number = 42;            //* Create an integer variable
//     int *pointer = &number;     //* Create a pointer that stores the address of 'number'

//     //* Dereference the pointer to access the value it points to
//     int value = *pointer;       //* 'value' now contains 42
//     cout << "The value of 'number' is: " << (*pointer)<<endl;      //*  The value of 'number' is: 42

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------
// //! Using dot operator and arrow symbol to access the value.
// #include <iostream>
// using namespace std;

// class LoveBabbar
// {
// public:
//     int RollNo;
// };

// int main()
// {
//     //* Creating the object dynamically
//     LoveBabbar *obj = new LoveBabbar;
//     (*obj).RollNo = 10;            //* Access and assign a value to RollNo using (*obj)
//     cout << (*obj).RollNo << endl; //* Output RollNo without the extra closing parenthesis.
//     //? output is 10.

//     cout << "the output is " << obj->RollNo << endl; //?   //? output is 10.

//     //* Don't forget to delete dynamically allocated memory
//     delete obj;

//     return 0;
// }
//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Default constructor -> automatically get called
// #include <iostream>
// using namespace std;

// class abc
// {
// public:
//     int a;
//     abc()
//     { //* Defining the constructor -> No return type, same name, No usage of void
//         cout << "Constructor is called" << endl;
//     }
// };

// int main()
// {
//     // Todo: Creating the object
//     // Todo: Statically creating object
//     abc objS;   //? Output: Constructor is called

//     // Todo: Dynamically creating object
//     abc *objD = new abc;            //? Output: Constructor is called

//     //? Output: Constructor is called

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Parameterised constructor
// #include <iostream>
// using namespace std;

// class Hello
// {
//     int a;

// public:
//     Hello(int a)
//     {
//         this->a = a; //* Corrected syntax: use -> instead of .
//         cout << "The value of field object is " << this->a;
//     }
// };
// int main()
// {
//     Hello obj(10);      //* The value of field object is 10
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! this stores the address of the current object
// #include <iostream>
// using namespace std;

// class Hello
// {
//     int a;

// public:
//     Hello(int a)
//     {
//         this->a = a; //* Corrected syntax: use -> instead of .
//         cout << "the address of the current object is -> " << this << endl;

//                 //TODO: Output the address of the current object is -> 0x16b50b468
//     }
// };
// int main()
// {
//     Hello obj(10); //* The value of field object is 10
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Default constructor -> No longer exist, if user defined the constructor
// #include <iostream>
// using namespace std;

// class Hello
// {
//     int a;

// public:
//     Hello(int a) //* Parameterised constuctor
//     {
//         this->a = a; //* Corrected syntax: use -> instead of .
//     }
// };
// int main()
// {
//     Hello obj();    //! Error: empty parentheses interpreted as a function declaration.
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Constructor -> Saurab Shukla
// #include <iostream>
// using namespace std;

// class complex
// {
// private:
//     int a, b;

// public:
//     //* Creating a constructor
//     complex()
//     {
//         cout << "Constructor called";
//     }
// };

// int main()
// {
//     //* Creating object
//     complex cpxObj, cpxobj2, cpxobj3; //* Constructor called Constructor called Constructor called
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Ways to write the constructor

// #include <iostream>
// using namespace std;
// class constructorType
// {
//     int a;

// public:
//     constructorType()
//     {
//         cout << "Parameterless constructor called";
//     }
//     constructorType(int a)
//     {
//         this->a = a;
//         cout << "Parameterised constructor called";
//     }
// };

// int main()
// {
//     constructorType a = constructorType(); //* Parameterless constructor called
//     cout << endl;
//     constructorType b = constructorType(2);     //* Parameterised constructor called

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Copy constructor -> Default created by compiler
// #include <iostream>
// using namespace std;
// class Hello
// {
// public:
//     int marks;
//     int rank;

//     Hello(int marks, int rank) //* Parameterised constuctor
//     {
//         this->marks = marks;
//         this->rank = rank;
//     }
// };

// int main()
// {
//     Hello obj1(150, 20);

//     //* 1st way to copy the object to another object
//     Hello obj2(obj1);           //! --> the copy constructor is by default created by C++ complier

//     //* 2nd way to copy the object to another object
//     Hello obj3 = obj1;          //! --> the copy constructor is by default created by C++ complier
//     cout << obj2.marks << endl; //* 150

//     cout << obj2.rank << endl; //* 20

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Copy constructor -> Using pass by reference
// #include <iostream>
// using namespace std;
// class Hello
// {
// public:
//     int marks;
//     int rank;

//     Hello(int marks, int rank) //* Parameterised constuctor
//     {
//         this->marks = marks;
//         this->rank = rank;
//     }
//     //! Copy constructor -> using Pass by reference
//     Hello(Hello &obj)
//     {

//         this->marks = obj.marks;
//         this->rank = obj.rank;
//         cout << "Copy constructor is called" << endl;
//     }
// };

// int main()
// {
//     Hello obj1(100, 10);
//     Hello obj2(obj1);
//     Hello obj3 = obj1;
//     cout << "Printing the value of Object 2 marks and rank " << obj2.marks << " " << obj2.rank << endl;
//     cout << "Printing the value of Object 3 marks and rank " << obj3.marks << " " << obj3.rank << endl;

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Copy constructor -> Created by User
// #include <iostream>
// using namespace std;

// class UserDefinedCopyConstructor
// {
// public:
//     int a;
//     int b;

//     UserDefinedCopyConstructor(int a, int b) //* Parameterised constuctor
//     {
//         this->a = a;
//         this->b = b;
//     }
//     //? Creating a copy constructor -> which takes input as object of UserDefinedCopyConstructor class
//     //* we created a copy constructor in which we take parameter as object. But we know that when an object is create the constructor is called -> hence again a copy constructor is called. To overcome this loop -->> we can pass object by reference.
//     UserDefinedCopyConstructor(UserDefinedCopyConstructor &obj)
//     {
//         this->a = obj.a;
//         this->b = obj.b;
//     }
// };
// int main()
// {
//     UserDefinedCopyConstructor obj1(20, 10);
//     UserDefinedCopyConstructor obj2 = obj1;
//     obj2.a = 50;
//     cout << "The value of Obj2 is " << obj2.a << " & " << obj2.b << endl;
//     //* output::  The value of Obj2 is 20 & 10
//     cout << "The value of Obj2 is " << obj1.a << " & " << obj1.b;
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

// //!  Shallow copy
// #include <iostream>
// using namespace std;
// class CDAC
// {
// public:
//     int a;
//     CDAC(int a)
//     {
//         this->a = a;
//     }
// };

// int main()
// {
//     CDAC obj1(10);
//     CDAC obj2(obj1);        //* Copying the value of a from obj1 to obj2.
//                             //* This is example of shallow copy.
//     obj2.a = 50;
//     cout << obj1.a << endl;     //* 10
//     cout << obj2.a << endl;     //* 50

//     //* the change in the value of obj2.a is not reflected in the obj1.a -> becoz it is passed as value. if the variable a is reference type (Pointer) then both the object -> obj1 and obj2 will point to same variable. hence change in the value of one object will be reflected in the other object

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!  Shallow copy
// #include <iostream>
// using namespace std;
// class CDAC
// {
// public:
//     int a;
//     int b;
//     int *p;

//     //* Creating a constructor to initialise the value of b
//     CDAC()
//     {
//         p = new int; //* Defining the pointer p -> points to int type variable
//     }

//     void setData(int a, int b, int z)
//     {
//         this->a = a;
//         this->b = b;
//         *p = z; //* Assigning value of z in p
//     }
//     //! Copy constructor
//     CDAC(CDAC & obj)
//     {
//         this->a = obj.a;
//         this->b = obj.b;
//         p = obj.p; //* Assigning value of z in p
//     }
// };

// int main()
// {
//     CDAC obj1;
//     obj1.setData(3, 4, 5);
//     CDAC obj2 = obj1;
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Deep Copy

// #include <iostream>
// using namespace std;
// class CDAC
// {
// public:
//     int a;
//     int b;
//     int *p;

//     //* Creating a constructor to initialise the value of b
//     CDAC()
//     {
//         p = new int; //* Defining the pointer p -> points to int type variable
//     }

//     void setData(int a, int b, int z)
//     {
//         this->a = a;
//         this->b = b;
//         *p = z; //* Assigning value of z in p
//     }
//     //! Copy constructor
//     CDAC(CDAC &obj)
//     {
//         this->a = obj.a;
//         this->b = obj.b;
//         p = new int;   //* Creating a new memory allocation for Pointer
//         *p = *(obj.p);  //* Assigning the value
//     }
// };

// int main()
// {
//     CDAC obj1;
//     obj1.setData(3, 4, 5);
//     CDAC obj2 = obj1;
//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//! Destructor:
#include <iostream>
using namespace std;
//* Creating a class:
class Destructor
{
    int a;

public:
    Destructor()
    {
        cout << "Constructor called" << endl;
    }
    ~Destructor()
    {
        cout << "Destructor called" << endl;
    }
};

//! Creating a function
void fun()
{
    Destructor obj; //* Creating a object and Constructor will be called.

    // Todo: Once the fun() method is done the destructor function will be called automatically on the object of destructor class
}

int main()
{
    //* Calling the function and when function is exectuded the destructor will be called automatically
    fun();
    return 0;
}

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

//* -------------------------------------------------------------------------------------------------

//!
// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
//

//}
