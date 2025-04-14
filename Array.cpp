#include<iostream>
using namespace std;
int main(){
 
    // int a[] = {1,2,3,4};                   //declare
    // cout<<sizeof(a);                                                               //16 becuase int store 4 byte for one element

//      int A[5] = {1,2,3,4,5};                   //initialization
//     for(int i = 0 ; i<5; i++){                 //traverse  = this only for print the above array
//             cout<<A[i]<<" ";
//    }


//user se input lena h to ---->>>

// int A[5] ;                                  //initialization
// for(int i = 0 ; i<5; i++){
//         // cin>>A[i];
// }
// for(int i = 0 ; i<5; i++){                 
//     // cout<<A[i]<<" ";
// }


// int A[5] = {1,2,3};
// for(int i=0; i<5;i++){
//     cout<<A[i]<<" ";                    //1,2,3,0,0   ==> by default baki k index element ko 0 de dega 
// }

//length of array ----->>
// int A[] = {1,2,3,4,5};

// int n = sizeof(A)/sizeof(A[0]);
// cout<<n;                       //5

//User k through array bnana h ------------->>
// int n ;
// cin>>n;
// int A[n];
// for(int i = 0; i<n;i++){
//     cin>>A[i];
// }
// for(auto x:A){
//     cout<<x<<" ";
// }

//By for-each loop ------------------------------------------------------------------------------------------------>>>
// int A[5] = {1,2,3,4,5};
// {
//     for(int x : A){
//         cout<<x<<" ";
//     }
// }


    return 0;
}