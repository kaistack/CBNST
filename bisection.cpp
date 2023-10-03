#include <iostream>
#include <iomanip> 
using namespace std;

#define f(n) (n * n - 2 * n - 1)

int main() {
    int c = 0;
    double p, n, bi, bi_val;

    cout << "Positive root: ";
    cin >> p;
    cout << "Negative root: ";
    cin >> n;

    do {
        bi = (p + n) / 2.0;
        bi_val = f(bi);

        if (bi_val > 0) {
            p = bi;
        } else if (bi_val < 0) {
            n = bi;
        }

        if (c++ == 50) {
            break;
        }
    } while (bi_val > 0.0001 && bi_val < 0);

    
    cout << "Root is " << bi << endl;

    return 0;
}
