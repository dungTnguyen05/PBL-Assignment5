#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    set<int> white;

    for (int i = 2; i <= 10; i++) {
        for (int j = i + 1; j <= 11; j++) {
            for (int k = j + 1; k <= 12; k++) {
                white.clear();
                white.insert(i);
                white.insert(j);
                white.insert(k);
                int total_passes = 0;

                for (int l = 0; l < 100000; l++) {
                    int pass = 0;
                    bool bust = false;

                    while (bust == false) {
                        int throws[4];
                        throws[0] = rand() % 6 + 1;
                        throws[1] = rand() % 6 + 1;
                        throws[2] = rand() % 6 + 1;
                        throws[3] = rand() % 6 + 1;
                        pass++;

                        int sum1 = throws[0] + throws[1];
                        int sum2 = throws[0] + throws[2];
                        int sum3 = throws[0] + throws[3];
                        int sum4 = throws[1] + throws[2];
                        int sum5 = throws[1] + throws[3];
                        int sum6 = throws[2] + throws[3];

                        if (white.find(sum1) == white.end()) {
                            if (white.find(sum2) == white.end()) {
                                if (white.find(sum3) == white.end()) {
                                    if (white.find(sum4) == white.end()) {
                                        if (white.find(sum5) == white.end()) {
                                            if (white.find(sum6) == white.end()) {
                                                bust = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                    total_passes += pass;
                }

                cout << "With " << i << " " << j << " " << k << ": " << double(total_passes)/100000 << endl;
            }
        }
    }
}