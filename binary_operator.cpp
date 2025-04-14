/*
There are two types of header files :

1. System header files: It comes with the compiler 
#include<iostream>

2. User header files: It is written by the programmer 
#include"this.h"  // --> Shows error if this.h is not present in the current directory
*/

/**************************************************************************************************************************************/
// Operators in C++

#include<iostream>
using namespace std;

int main() {
    int a = 4, b = 5;
    cout << "Operators in C++: " << endl;
    cout << "Following are the types of operators in C++:" << endl;

    // ARITHMETIC OPERATORS     ( = - * / %)
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << endl;

    // ASSIGNMENT OPERATORS ==> used to assign values to variables     (+=  -=  *=  /=  %=)  ===> work on Dry principle = means (do not repeat yourself)
    cout << "Following are the types of assignment operators in C++: " << endl;
    cout << "Assigning the value 10 to a: " << (a = 10) << endl;  
    cout << "The value of a += b is " << (a += b) << endl;  // a += b is same as a = a + b
    cout << "The value of a -= b is " << (a -= b) << endl;  
    cout << "The value of a *= b is " << (a *= b) << endl; 
    cout << "The value of a /= b is " << (a /= b) << endl; 
    cout << "The value of a %= b is " << (a %= b) << endl;  
    cout << endl;

    // RELATIONAL OPERATORS  (>  <  <=  >= == !=)      // give output in the form of true(1) or false(1)
    cout << "Following are the types of comparison operators in C++: " << endl;
    cout << "The value of a == b is " << (a == b) << endl;   //Comparision operator
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;      // koi ek bhi condition satisfy hogi to answer true hoga means ya to > ya phir =
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << endl;

    // LOGICAL OPERATORS  ( and or exor not)
    cout << "Following are the types of logical operators in C++: " << endl;
    cout << "The value of this logical AND operator ((a == b) && (a < b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical OR operator ((a == b) || (a < b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical ExOR operator ((a == b) ^ (a < b)) is: " << ((a == b) ^ (a < b)) << endl;   // dono input same to output 0 otherwise 1
    cout << "The value of this logical NOT operator (!(a == b)) is: " << (!(a == b)) << endl;


    // BITWISE OPERATORS   ( and or exor not , ~ , <<(left shift), >>(right shift) )   = work on binary numbers means first convert in binary no. then perform operation
    cout << "Following are the types of logical operators in C++: " << endl;
    cout<< "The value of this bitwise AND operator (a&b) is: " <<(a&b)<<endl;
    cout<< "The value of this bitwise OR  operator (a|b) is: " <<(a|b)<<endl;
    cout<< "The value of this bitwise ExOR operator (a^b) is: " <<(a^b)<<endl;
    // cout<< "The value of this bitwise tilt operator (~a) is: " <<(~a)<<endl; //       -(variabel+1)
    // cout<< "The value of this bitwise leftshift  operator (<<a) is: " <<(<<a)<<endl;
    // cout<< "The value of this bitwise rightshift operator (>>b) is: " <<(>>a)<<endl;


    
    return 0;
}