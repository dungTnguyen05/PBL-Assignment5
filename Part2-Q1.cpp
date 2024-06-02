#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int passes[4] = {0};
    int total_games = 100000;

    for (int i = 0; i < 100000; i++) {
        int pass_temp = 0;
        bool bust = false;

        while (bust == false) {
            int throw1 = rand() % 6 + 1;
            int throw2 = rand() % 6 + 1;
            int throw3 = rand() % 6 + 1;
            int throw4 = rand() % 6 + 1;

            pass_temp++;

            int sum1 = throw1 + throw2;
            int sum2 = throw1 + throw3;
            int sum3 = throw1 + throw4;
            int sum4 = throw2 + throw3;
            int sum5 = throw2 + throw4;
            int sum6 = throw3 + throw4;

            if (sum1 != 3 && sum1 != 8 && sum1 != 11) {
                if (sum2 != 3 && sum2 != 8 && sum2 != 11) {
                    if (sum3 != 3 && sum3 != 8 && sum3 != 11) {
                        if (sum4 != 3 && sum4 != 8 && sum4 != 11) {
                            if (sum5 != 3 && sum5 != 8 && sum5 != 11) {
                                if (sum6 != 3 && sum6 != 8 && sum6 != 11) {
                                    bust = true;
                                }
                            }
                        }
                    }
                }
            }
        }

        if (pass_temp <= 4) {
            passes[pass_temp - 1]++;
        }
    }

    double pass_prob1 = double(passes[0]) / total_games;
    double pass_prob2 = pass_prob1 + double(passes[1]) / total_games;
    double pass_prob3 = pass_prob2 + double(passes[2]) / total_games;
    double pass_prob4 = pass_prob3 + double(passes[3]) / total_games;

    cout << "Busting after 1 throw(s): " << pass_prob1 << endl;
    cout << "Busting after 2 throw(s): " << pass_prob2 << endl;
    cout << "Busting after 3 throw(s): " << pass_prob3 << endl;
    cout << "Busting after 4 throw(s): " << pass_prob4 << endl; 
}