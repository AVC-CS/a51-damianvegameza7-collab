// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // TODO: declare variable n for the exponent input
    int n;
    double result = 1.0;
    cin >> n;

    if(n>= 0) {
        for(int i = 0; i<n; i++) {
            result *=2;
        }
    }
        else {
            for(int i = 0; i< -n; i++) {
                result /=2;
            }
        }
        cout << fixed << setprecision(5) << result << endl;

}
