#include <iostream>
using namespace std;
 int main(){
//    operator = to perform operations on operands
// Types : Unary = single operand , Binary = multiple operands, tertary = conditional operands

//Unary     1. increment(pre, post)      1. decrement(pre,post)
     
     //syntax

     // pre increment = ++a
     // post increment = a++

      // pre decrement = --a
     // post decrement = a--

    //  int a = 10;
    //  int b = 20;
    //  int c = 13;

    //  cout<<c-- + b-- + a++ - b++ - c-- + a++;           // 13 + 20 + 10 - 19 - 12 + 11 = 23

   //  int a = 5;
   //  int b= 6;

   //  cout<<(a&b);
   //  cout<<(a|b);
   //  cout<<(a^b);


   //  trenary operator    ==> ()?true:false;



   // int n = 19;
   // (n%2==0)?cout<<"even":cout<<"odd";   //odd or even

   

// To check a factor----->
   // int num,numb;
   // cout<<"enter those numbers";
   // cin>>num>>numb;
   // (num%numb==0)?cout<<"factor":cout<<"not a factor";



// To check a number lie between 20 & 29--->   
/* int num;
   cout<<"enter number";
   cin>>num;
   (num>20 && num <<29)?cout<<num:cout<<"invalid"*/


   // int num;
   // cout<<"enter number";
   // cin>>num;
   // ((num>20 && num <29) && ((num%2==0 && num%5==0)))?cout<<"divisible":cout<<"invalid";
   // ((num>20 && num <29) ? ((num%2==0 && num%5==0)))?cout<<"divisible":cout<<"not div" :cout<<"invalid";
   
   // int num,a,b;
   // cout<<"enter number";
   // cin>>num,a,b;
   // (num==1)?cout<<(a*b):(num==2)?cout<<(a/b):cout<<"invalid";


//    int pass;
//    cout<<"enter password";
//    cin>>pass;

//    (pass==3)?cout<<"password is correct":                    // true portion
   
//   (cout<<"invalid password try again" , 
//    cin>>pass, 
//     (pass==3)?cout<<"password is correct":cout<<"invalid password try again" );   // false portion if password is wrong then execute this part



    
   int pass;
   cout<<"enter password";
   cin>>pass; 

   (pass==3)?cout<<"password is correct":                    // true portion
   
  (cout<<"invalid password try again" , 
   cin>>pass, 
    (pass==3)?cout<<"password is correct":cout<<"invalid password try again" );   // false portion if password is wrong then execute this part


  (cin>>pass, 
    (pass==3)?cout<<"password is correct":cout<<"blocked " );  
    

    // ternary operator are not proper readable that's why we use if else statement

 }