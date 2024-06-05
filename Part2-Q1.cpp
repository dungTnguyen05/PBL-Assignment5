#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // generate random numbers differently each time the program runs
    int passes[4] = {0}; // init array passes with 4 elements to store the number of passes before busting
    int total_games = 100000; // set the total number of games to be 100000

    // run the simulation 100000 times
    for (int i = 0; i < 100000; i++) {
        int pass_temp = 0; // (re)set the number of passes before busting
        bool bust = false; // set the bust flag to false when start each game

        // keep throwing the dice until the player busts
        while (bust == false) {
            // generate random numbers between 1 and 6 for the 4 dice throws
            int throw1 = rand() % 6 + 1;
            int throw2 = rand() % 6 + 1;
            int throw3 = rand() % 6 + 1;
            int throw4 = rand() % 6 + 1;

            pass_temp++; // increment the number of throw turns

            // calculate the possible sums of 2 out of 4 dice throws
            int sum1 = throw1 + throw2;
            int sum2 = throw1 + throw3;
            int sum3 = throw1 + throw4;
            int sum4 = throw2 + throw3;
            int sum5 = throw2 + throw4;
            int sum6 = throw3 + throw4;

            // check if none of 6 different sums is not 3, 8, or 11
            // if so, set the bust flag to true 
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

        // increment the number of passes before busting after 1, 2, 3 or 4 throws
        if (pass_temp <= 4) {
            passes[pass_temp - 1]++;
        }
    }

    // calculate the probability of busting after 1, 2, 3 or 4 throws
    double bust_prob1 = double(passes[0]) / total_games;
    double bust_prob2 = bust_prob1 + double(passes[1]) / total_games;
    double bust_prob3 = bust_prob2 + double(passes[2]) / total_games;
    double bust_prob4 = bust_prob3 + double(passes[3]) / total_games;

    // output the probabilities
    cout << "Busting after 1 throw(s): " << bust_prob1 << endl;
    cout << "Busting after 2 throw(s): " << bust_prob2 << endl;
    cout << "Busting after 3 throw(s): " << bust_prob3 << endl;
    cout << "Busting after 4 throw(s): " << bust_prob4 << endl; 
}