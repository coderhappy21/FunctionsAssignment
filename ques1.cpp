#include<iostream>
using namespace std;

//square from 1 to n natural numbers
void square(int n){
    for(int i = 1 ; i<=n; i++){
        cout<<"square of "<<i<<" is: "<<i*i<<endl;
    }
 return;

}
int main(){

int n ;
cout<<"enter a number: ";
cin>>n;


square(n); //fuction call




}