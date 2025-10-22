#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n == 0 || n == 1) { 
        return 1;
    } 
    else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "negative number" <<endl;
    } else {
        long long result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << std::endl;
    }
    return 0;
}

