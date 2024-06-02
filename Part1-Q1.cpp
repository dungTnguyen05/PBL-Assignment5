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

                    if (sum1 == 3 || sum1 == 8 || sum1 == 11) {
                        pass++;
                    }

                    else if (sum2 == 3 || sum2 == 8 || sum2 == 11) {
                        pass++;
                    }

                    else if (sum3 == 3 || sum3 == 8 || sum3 == 11) {
                        pass++;
                    }

                    else if (sum4 == 3 || sum4 == 8 || sum4 == 11) {
                        pass++;
                    }

                    else if (sum5 == 3 || sum5 == 8 || sum5 == 11) {
                        pass++;
                    }

                    else if (sum6 == 3 || sum6 == 8 || sum6 == 11) {
                        pass++;
                    }

                    else {
                        bust++;
                    }
                }
            }
        }
    }

    double pass_prob = pass / pow(6, 4);
    double bust_prob = bust / pow(6, 4);

    cout << "The probability of advancing is: " << pass_prob << endl;
    cout << "The probability of busting is: " << bust_prob << endl;
}