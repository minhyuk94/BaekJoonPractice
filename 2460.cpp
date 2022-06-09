#include <string>
#include <iostream>

using namespace std;

int main(void)
{
    int old_total = 0;
    int new_total = 0;
    int out,in = 0;

    for (int i=0; i<10; i++) {
        scanf("%d %d", &out, &in);
        new_total += -out+in;

        if (old_total < new_total) {
            old_total = new_total;
        }
    }

    printf("%d\n", old_total);
    return 0;
}

// cin cout은 속도가 느리다고함. 가능하면 scanf, printf 를 사용하도록.