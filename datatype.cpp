# include <iostream>
#include <limits>
using namespace std;

int main(){

// Types of datatype in C++  
    
    // int    //natural numbers(1-100000)
    // float  //1.234(7-8)
    // double  //1.234(14-15)
    // char   // a-z  A-Z  special symbol(@&$%)
    // void   //non stroing 
    // bool    // true/false    1111/0 => loose couple language    => 1 ki jgh koi bhi non zero number rkho vo 1 hi manega bcz vo loose couple language h 

    // int a;

 //size , address,  limits  ------------>>>>>>   

    // cout<<sizeof(int);      //size of operator
    // cout<<&a;               //Address of variable => hamesha variable ka address nikalta h hexadecimal me or datatype ka size niklta h yha a ek variable h 
    cout<<numeric_limits<int>::min();   //find range/limit of datatype
}


//char ka size 1 isliye hota h kyonki vo ascii code ko follow krta h
