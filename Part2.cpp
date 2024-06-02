#include <iostream>
#include <set>
#include <ctime>
using namespace std;

int main() { 
    srand(time(0)); // to generate different random numbers each time the program is run
    set<int> white;
    int throws[4] = {0};

    int total_passes[4] = {0}; // initialize all elements to 0
    int total_game = 100000;

    // run the game 100,000 times
    for (int i = 0; i < 100000; i++) {
        white.clear();
        int pass = 0;
        bool bust = false;

        while (bust == false) {
            throws[0] = rand() % 6 + 1;
            throws[1] = rand() % 6 + 1;
            throws[2] = rand() % 6 + 1;
            throws[3] = rand() % 6 + 1;
            pass++;
            //cout << throws[0] << " " << throws[1] << " " << throws[2] << " " << throws[3] << endl;

            if (white.size() <= 1) {
                int sum = throws[0] + throws[1] + throws[2] + throws[3];
                // choose randomly the throw added with throws[0]
                int idx = rand() % 3 + 1;
                int sum1 = throws[0] + throws[idx];
                int sum2 = sum - sum1;
                white.insert(sum1);
                white.insert(sum2);
                //pass++;
            }

            else if (white.size() == 2) {
                int idx1 = rand() % 4;
                int idx2 = rand() % 4;

                while (idx1 == idx2) {
                    idx2 = rand() % 4;
                }

                white.insert(throws[idx1] + throws[idx2]);
                //pass++;
            }

            // when there are already 3 white runners on the board, we only need to check if there are 
            else {
                int sum1 = throws[0] + throws[1];
                int sum2 = throws[0] + throws[2];
                int sum3 = throws[0] + throws[3];
                int sum4 = throws[1] + throws[2];
                int sum5 = throws[1] + throws[3];
                int sum6 = throws[2] + throws[3];

                if (white.find(sum1) != white.end() || white.find(sum2) != white.end() || white.find(sum3) != white.end() || white.find(sum4) != white.end() || white.find(sum5) != white.end() || white.find(sum6) != white.end()) {
                    //pass++;
                }

                else {
                    bust = true;
                }
            }
        }

        cout << pass << endl;

        if (pass <= 4) {
            total_passes[pass - 1]++;
        }
    }

    double pass_prob1 = total_passes[0] / total_game;
    double pass_prob2 = pass_prob1 + (total_passes[1] / total_game);
    double pass_prob3 = pass_prob2 + (total_passes[2] / total_game);
    double pass_prob4 = pass_prob3 + (total_passes[3] / total_game);

    cout << "Busting after 1 throw(s): " << pass_prob1 << endl;
    cout << "Busting after 2 throw(s): " << pass_prob2 << endl;
    cout << "Busting after 3 throw(s): " << pass_prob3 << endl;
    cout << "Busting after 4 throw(s): " << pass_prob4 << endl; 
}