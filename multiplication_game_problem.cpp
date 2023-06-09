#include <iostream>
using namespace std;

int main()
{
    unsigned n;
    while (cin >> n) {
        while (n>18)
            n=(n-1)/18+1;
        if (n>9)
            cout << "Ollie wins.\n";
        else
            cout << "Stan wins.\n";
    }
    return 0;
}
