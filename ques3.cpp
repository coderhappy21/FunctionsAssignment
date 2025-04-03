#include<iostream>
using namespace std;

//all odd numbers bw a and b
void odd(int a , int b){
    for(int i = a+1 ; i<b; i++){
        if (i%2 !=0) 
        cout<<i<<" is a odd number "<<endl;
    }
 return;

}
int main(){

int a ;
cout<<"enter first number: ";
cin>>a;

int b ;
cout<<"enter second number: ";
cin>>b;


odd(a,b); //fuction call




}