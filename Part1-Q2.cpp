#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pass = 0;
    int bust = 0;

    for (int throw1 = 1; throw1 <= 6; throw1++) {
        for (int throw2 = 1; throw2 <= 6; throw2++) {
            for (int throw3 = 1; throw3 <= 6; throw3++) {
                for (int throw4 = 1; throw4 <= 6; throw4++) {
                    int sum1 = throw1 + throw2;
                    int sum2 = throw1 + throw3;
                    int sum3 = throw1 + throw4;
                    int sum4 = throw2 + throw3;
                    int sum5 = throw2 + throw4;
                    int sum6 = throw3 + throw4;

                    if (sum1 == 2 || sum1 == 4 || sum1 == 11) {
                        pass++;
                    }

                    else if (sum2 == 2 || sum2 == 4 || sum2 == 11) {
                        pass++;
                    }

                    else if (sum3 == 2 || sum3 == 4 || sum3 == 11) {
                        pass++;
                    }

                    else if (sum4 == 2 || sum4 == 4 || sum4 == 11) {
                        pass++;
                    }

                    else if (sum5 == 2 || sum5 == 4 || sum5 == 11) {
                        pass++;
                    }

                    else if (sum6 == 2 || sum6 == 4 || sum6 == 11) {
                        pass++;
                    }

                    else {
                        bust++;
                    }
                }
            }
        }
    }

    double passProb = pass / pow(6, 4);
    double bustProb = bust / pow(6, 4);

    cout << passProb << endl;
    cout << bustProb << endl;
}