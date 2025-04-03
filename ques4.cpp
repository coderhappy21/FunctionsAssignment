#include<iostream>
using namespace std;

//count the digits & print square
void COUNT(int n){
    int sq = n*n;

    int count = 0;
    while(n !=0){
    n = n/10;
    count++;
    }
    
    cout<<"the total digits in given number: "<<count;
    cout<<endl;
    cout<<"the square of given number: "<<sq;
 return;

}
int main(){

int n ;
cout<<"enter a number: ";
cin>>n;


COUNT(n); //fuction call




}