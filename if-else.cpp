#include <iostream>
#include<cmath>
using namespace std;
int main()
{

//    // conditional statement =  to check two or more conditions = if-else ,  else if ,  nested if

//    //    int num;
//    //    cout<<"enter number";
//    //    cin>>num;
//    //    if(num%2==0){
//    //     cout<<"number is even";
//    //    }

//    //   else
//    //     cout<<"false";

//    // int num;
//    // cout<<"enter num";
//    // cin>>num;
//    // if(num>20 && num<30){
//    //    cout<< num;
//    // }
//    // else
//    // cout<<"invalid";

//    // This is not readable so, use nested if :-
//    //  int num;
//    //  cout<<"enter num";
//    //  cin>>num;
//    //  if((num>20 & num<40) & (num%2==0 & num%3==0)){
//    //     cout<< num;
//    //  }
//    //  else
//    //  cout<<"invalid";

//    // nested if
//    //  int num;
//    //  cout<<"enter num";
//    //  cin>>num;
//    //  if(num>20 & num<40)
//    //  {
//    //     if(num%2==0 & num%3==0)
//    //     cout<< num;
//    //  }
//    //  else
//    //  cout<<"invalid";
//    //   }

//    // check user input is character or not -->
//    //    char c;
//    //    cout << "enter character";
//    //    cin >> c;
//    //    if (c>='A'&& c<='Z' || c>='a'&& c<='z')
//    //    {
//    //       cout << "it is a character";
//    //    }
//    //    else
//    //       cout << "not";
//    // }


// //Topic of else-if  
//    //    char c;
//    //    cout << "enter character";
//    //    cin >> c;
//    //    if (c >= 'A' && c <= 'Z')
//    //    {

//    //       cout << "it is a  uppercase character";
//    //    }
//    //    else if (c >= 'a' && c <= 'z')
//    //    {
//    //       cout << "it is a  lowercase character";
//    //    }

//    //    else
//    //       cout << "invalid";
//    // }


   
//    int n;
//    cout << "enter numbers";
//    cin >> n;
//    if (n == 1)
//    {
//       cout << "jan = 31";
//    }
//    else if (n == 2)
//    {
//       cout << "feb = 28";
//    }
//    else if (n == 3)
//    {
//       cout << "Mar = 31";
//    }
//    else if (n == 4)
//    {
//       cout << "April = 30";
//    }
//    else if (n == 5)
//    {
//       cout << "May = 31";
//    }
//    else if (n == 6)
//    {
//       cout << "30";
//    }
//    else if (n == 7)
//    {
//       cout << "31";
//    }
//    else if (n == 8)
//    {
//       cout << "31";
//    }

//    else
//       cout << "enter correct number";


//check eligibility 
// int age ;
// cin>>age;
// if(age>19){
//     cout<<"eligible";
// }
// else{
//    cout<< "not";
// }



//make a program by using switch case  ---->>
// int a, b;
// char c;
// cout<<"Enter values and their character";
// cin>>a>>b>>c;
// if(c=='+'){
//     cout<<a+b;
// }

// else if(c=='-'){
//     cout<<a-b;
// }
// else if(c=='*'){
//     cout<<a*b;
// }
// else if(c=='/'){
//     cout<<a/b;
// }
// else if(c=='%'){
//     cout<<a%b;
// }
// else
// cout<<"enter correct input";



//check lastdigit is 7 or not --->>
// int a, b, c;
// cout<<"enter values";
// cin>>a>>b;

// c = pow(a,b);
// if(c%10==7){
//     cout<<"lucky";
// }
// else
// cout<<"unlucky";
// cout<<c;


//check firstdigit is 1 or not --->>
// int a, b, c;
// cout<<"enter values";
// cin>>a>>b;

// c = pow(a,b);
// if(c/10==1){
//     cout<<"lucky";
// }
// else
// cout<<"unlucky";
// cout<<c;



// int n,sum;
// cin>>n;
// sum = n*(n+1)/2;
// if(sum%2==0){
//     cout<<"even";
// }
// cout<<"odd";


//check leapyear or not ------->> 
    // int year;
    // cin >> year;

    // if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
    //     cout << "leap";
    // } else {
    //     cout << "non-leap";
    // }

    // return 0;


//check roots are real or not -->> in binary equation = asquare x + bx + c wali euation me-------->>
// int a , b , c,d;
// cin>>a>>b>>c;

// d = pow(b,2)-(4*a*c);
// if(d>0){
//     cout<<"roots are real and different";
// }
// else if(d==0){
//     cout<<"roots are real and equal";
// }

// else
// cout<<"roots are unreal";




//find discount on billamount ------------->>>>>>>>>>
// float bill;
// float discount,updatedbill;
// cin>>bill;
// if(bill<100){
//     cout<<"no discount";
//     discount = 0;
//     updatedbill = bill-discount;    // ye yha na likh kr niche bhi end me likh skte h 
// }

// else if(bill>=100 && bill<500) {
//     discount = bill*10/100;
//     updatedbill = bill-discount;

// }
// else if(bill>=500 && bill<1000) {
//     discount = bill*15/100;
//     updatedbill = bill-discount;

// }
// else {
//     discount = bill*20/100;
//     updatedbill = bill-discount;   

// }

// // updatedbill = bill-discount;   
// cout<<discount<<endl;
// cout<<updatedbill;

}