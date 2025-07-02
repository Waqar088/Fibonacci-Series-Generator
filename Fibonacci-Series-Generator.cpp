#include <iostream>
using namespace std;

int main() {
    cout << "=== Fibonacci Series Generator ===" << endl;

    int limit;
    cout << "Enter the limit up to which you want the Fibonacci series: ";
    cin >> limit;

    int first = 0, second = 1, next;

    cout << "Fibonacci series up to " << limit << ":\n";

    if (limit >= 0)
        cout << first << " ";
    if (limit >= 1)
        cout << second << " ";

    for (int i = 2; ; ++i) {
        next = first + second;
        if (next > limit)
            break;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
