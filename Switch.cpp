#include<iostream>
using namespace std;

int main()
{
    /*
    char ch = '1';
    cout << endl;

    switch ( ch ) {
        case 1: cout << " First" << endl;
        break;
        case 2: cout << "Secound" << endl;
        break; 
        default: cout << " Default "<< endl;
        break;

    }
    cout<< endl;
    return 0;
}
    */
{
    char ch = '1';
    int num = 1;

    cout << endl;
    switch (ch){
        case 1: cout << "Forst" << endl;
        break;
        case '1': switch (num){
            case 1: cout << "Value of num is " << num << endl;
            break;
            default: cout << "Default case for num" << endl;
            break;
        }
    }
   }
    cout << endl;
    return 0;
}