#include <string>
#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
    int index[10];
    
    for(int i = 0; i < 10; i++) {
        index[i] = 0;
    }

    cin >> a >> b >> c;

    if ((a >= 100 && a < 1000) && (b >= 100 && b < 1000) && (c >= 100 && c < 1000)) {
        int result_int = a * b * c;
        string result = to_string(result_int);
        // cout << result << endl;
        // cout << result.size() << endl;
        for (int i= 0; i < result.size(); i++) {
            // cout << typeid(result[i]).name() << endl;
            if (result[i] == 48) {
                index[0] += 1;
            }
            else if (result[i] == 49) {
                index[1] += 1;
            }
            else if (result[i] == 50) {
                index[2] += 1;
            }
            else if (result[i] == 51) {
                index[3] += 1;
            }
            else if (result[i] == 52) {
                index[4] += 1;
            }
            else if (result[i] == 53) {
                index[5] += 1;
            }
            else if (result[i] == 54) {
                index[6] += 1;
            }
            else if (result[i] == 55) {
                index[7] += 1;
            }
            else if (result[i] == 56) {
                index[8] += 1;
            }
            else if (result[i] == 57) {
                index[9] += 1;
            }
        }
    }
    
    for (int i = 0; i<10; i++) {
        cout << index[i] << endl;
    }

	return 0;
}