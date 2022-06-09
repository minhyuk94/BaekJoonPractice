#include <string>
#include <iostream>

using namespace std;

int main(void)
{
    string a,b;
    string rev_a,rev_b;

    cin >> a >> b;

    for (int i=2; i>=0; i--) {
        rev_a += a[i];
        rev_b += b[i];
    }

    if (rev_a > rev_b) {
        cout << rev_a << endl;
    }
    else {
        cout << rev_b << endl;
    }

    return 0;
}