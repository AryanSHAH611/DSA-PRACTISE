#include<iostream>
using namespace std;

int main() {
/*
    int n;

    cin>>n;

    if(n>0)
    {
        cout<< "n is Positive" << endl;
    }
    else
    {
        cout << "n is Negative" << endl;
    }
*/
/*
int a,b;

cin>> a >> b;

cout<< "Value of a and b is "<< a << "" << b << endl;
*/
/*
int a,b;

a = cin.get(); // ASCII values

cout<< "Value of a is:" << a <<endl;
*/
/*
int a,b;
cout<< "Enter the value of a: " << endl;
cin >> a;

cout<< "Enter the value of b: " << endl;
cin >> b;

if(a>b){
    cout<< "A is greater " << endl;
}
if(a<b)
{
    cout<< "B is greater "<< endl;
}
*/

int a  ;
cout<< "Enter the value of a: " << endl;
cin >> a;

if(a>0){
    cout<<"A is positive";
}
else
{
    if(a<0){
        cout<<"A is negative";
    }
    else{
        cout<<"A is zero"; 
    }
}
}