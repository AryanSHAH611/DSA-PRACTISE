#include<iostream>
#include<cmath>
using namespace std;
int main()
/*
{
   // ans = digit * 10^i + ans; i will be incremented in each iteration, and digit will be the no we have taken from the user
  // it helps to reverse the numer like 1234 will be 4321
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int ans = 0, i = 0;
    while (n > 0) {
        int digit = n % 10; // get the last digit
        ans = digit * pow(10, i) + ans; // add it to the answer
        n /= 10; // remove the last digit
        i++; // increment i for next position
    }

    cout << "The reversed number is: " << ans << endl;
    return 0;
}

{
    //conver decimal to binary
    n != 0;
    {
        bit = n &1; // get the last bit
        n = n >> 1; // right shift to remove the last bit
        ans = bit + ans * 10; // add the bit to the answer
        i++; // increment i for next position
    }
}

{ 
    //another way to convert binary to decimal
    
    int n;
    cout << "Enter the value of n: " << endl;    
    
    int reminder = 0;
    int ans = 0;

    cin >> n;
    n != 0;
    n = n % 2;
    reminder = ans // store the reminder
    //repeat until n is 0
    // reverse the number
}
  
{
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while ( n != 0){
        int bit = n & 1; // get the last bit
        ans = (bit * pow(10,i))+ ans; // add the digit to the answer

        n = n >> 1; // right shift to remove the last bit
        i++; // increment i for next position
    }
    cout << " Answer is " << ans << endl;
}
 

{
    int n;
    cout << "enter the value of n:" << endl;
    cin<< n;

    unsignedint x;
    if (n >= 0){
        x=n;
    } else {
        x = (1 << 32) + n; // convert negative to unsigned
    }
    int ans = 0;
    int i = 0;
    while (x != 0){
        int bit = x & 1; // get the last bit
        ans = (bit * pow(10, i)) + ans; // add the digit to the answer

        x = x >> 1; // right shift to remove the last bit
        i++; // increment i for next position
    }
    cout << "Answer is: " << ans << endl;

}
*/
{
    int n;
    cin >> n; // binary number input (e.g., 1011)

    int i = 0;
    int ans = 0;

    while (n != 0) {
        int digit = n % 10; // get the last digit
        if (digit == 1) {
            ans = ans + pow(2, i); // add 2^i if the bit is 1
        }
        n = n / 10; // remove the last digit
        i++; // move to next position
    }

    cout << "The decimal value is: " << ans << endl;
    return 0;
}