#include <iostream>
using namespace std;

int main() {
    for (char ch = 32; ch <= 126; ch++) {
        cout << ch << " : " << (int)ch << endl;
    }
    return 0;
}
