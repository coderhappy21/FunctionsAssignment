#include<iostream>
using namespace std;

//area of circle
void AREA(float r){
    float area = 3.14*r*r;
    cout<<"area of circle is : "<<area<<endl;
    
 return;

}
int main(){

float r ;
cout<<"enter the radius: ";
cin>>r;


AREA(r); //fuction call




}