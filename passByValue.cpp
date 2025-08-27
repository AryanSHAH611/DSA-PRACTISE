#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout << "Value of n: " << n << endl;


}

int main()
{
    int n;
    cin >> n;
    dummy(n);

    cout << "Value of n in main: " << n << endl;

    return 0 ;
}