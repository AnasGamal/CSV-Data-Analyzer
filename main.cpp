#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <float.h>

using namespace std;
int main(int argc, char *argv[]) {
        if (argc < 2) {
                cout << "Need 3 arguments at least" << endl;
                return -1;
        }
        ifstream t(argv[1]);
        if(t.is_open()) {
                string s;
                int col = atoi(argv[3]);
                string sep = argv[2];
                double small = DBL_MAX;
                double big = DBL_MIN;
                double sum = 0;
                double numofterms = 0;
                while(getline(t,s)) {
                        int pos = -1;
                        for (int i = 0; i < col; i++) {
                                pos = s.find(sep, pos + 1 );
                }
                int pos2 = pos+1;
                        pos2 = s.find(sep,pos2);
                        string t = s.substr(pos+1, pos2-pos-1);
                        stringstream ts(t);
                        double val;
                        if(ts >> val) {
                                cout << val << endl;
                                sum += val;
                                numofterms += 1;
                                if (val < small) {
                                small = val;
                                }
                                if (val > big) {
                                big = val;
                                }
                        }

                }

                double mean = sum/numofterms;

        cout << "Biggest number is: " << big << endl;
        cout << "Smallest number is: " << small << endl;
        cout << "Mean is: " << mean << endl;
        }
}
