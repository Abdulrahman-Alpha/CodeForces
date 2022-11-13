#include <iostream>
using namespace std;
int main() {
    float ans ;
    cout << "Welcome Mr/MS " << endl;
    cout << "Enter first Number : ";
    float num1;
    cin >> num1;
    cout << "Enter second Number : ";
    float num2;
    cin >> num2;
    cout << "Enter the operation sign : ";
    string opr;
    cin >> opr;
    if (opr == "+"){
     ans = num1 + num2;
     cout << "The Answer is : " << ans << endl;
     cout << "Happy to Serve You " << endl;
    } else if (opr == "-"){
     ans = num1 - num2;
     cout << "The Answer is : " << ans << endl;
     cout << "Happy to Serve You " << endl;
    } else if (opr == "/"){
     ans = num1 / num2;
     cout << "The Answer is : " << ans << endl;
     cout << "Happy to Serve You " << endl;
    } else if (opr == "*"){
     ans = num1 * num2;
     cout << "The Answer is : " << ans << endl;
     cout << "Happy to Serve You " << endl;
    } else {
     cout << "Enter right input i.e. (+ , - , / , *)"<< endl;
     cout << "Try again *_* " << endl;
    }
}
