#include<iostream>
using namespace std;
int main(){
    int a, b;
    char c;
    cout<<"Enter valued";
    cin>>a>>b>>c;
    switch(c){
        case '+' :
        cout<<a+b;
        break;
        case '-' :
        cout<<a-b;
        break;

        case '*' :
        cout<< a*b; 
        break;
        case '/' :
        cout<< a/b; 
        break;
        case '%' :
        cout<<a%b;
        break;

        default:
        cout<<"invalid input";


    }

}