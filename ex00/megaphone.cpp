#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
    if (argc == 1) {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        string input = argv[i];
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        cout << input << endl;
    }
    return 0;
}
