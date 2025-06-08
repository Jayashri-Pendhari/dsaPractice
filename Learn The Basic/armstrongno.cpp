#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int numDigits = 0;
    int sum = 0;

    // Count number of digits
    int temp = n;
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }

    // Calculate sum of each digit raised to the power numDigits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int p=pow(digit, numDigits);
        sum+=p;
        cout<<"pow"<<pow(digit, numDigits)<<endl;// Can be replaced with manual loop if needed
        cout<<"sum:"<<sum;
        temp /= 10;
    }
    cout<<pow(5,3);
    // Check for Armstrong
    if (sum == original)
        cout << "yes";
    else
        cout << "no";

    return 0;
}
