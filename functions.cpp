#include<iostream>
using namespace std;
int power()
/*
 {
    int a, b;
    cout << " ENter the value od A : : " << endl;
    cout << "Enter the value of B: " << endl;
    cin >> a >> b;

    int ans = 1;
    for ( int i = 1; i <=b; i++) {
        ans = ans* a;
    }

    cout << " the value is" << ans << endl;
    return 0;
}
*/
  {
    int a,  b;
    cin >> a >> b;

    int ans = 1;
    for(int i = 1; i<= b; i++){
        ans = ans *a;
    }
    return ans;
  }
  int main () {
    int ans = power();
    cout << "the value of ans is: " << ans << endl;
    return 0;   
  }
