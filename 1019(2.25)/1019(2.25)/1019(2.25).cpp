#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> rotate90(const vector<string>& block) {
    size_t maxLen = 0;
    for (auto& line : block)
        maxLen = max(maxLen, line.size());

    vector<string> padded;
    for (auto& line : block) {
        string temp = line;
        temp.resize(maxLen, ' ');
        padded.push_back(temp);
    }

    vector<string> rotated;
    for (size_t col = 0; col < maxLen; ++col) {
        string row;
        for (int r = padded.size() - 1; r >= 0; --r)
            row += padded[r][col];
        rotated.push_back(row);
    }
    return rotated;
}

void show(const vector<string>& block) {
    for (auto& line : block)
        cout << line << endl;
}

int main() {
    vector<string> Y = {
        "Y       Y",
        " Y     Y ",
        "  Y   Y  ",
        "   Y Y   ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    ",
        "    Y    "
    };

    vector<string> L = {
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "L",
        "LLLLLLL"
    };   
    show(rotate90(Y));
    show(rotate90(Y));
    show(rotate90(L));

    return 0;
}