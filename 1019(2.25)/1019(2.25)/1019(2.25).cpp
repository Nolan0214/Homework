// 1019(2.25).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// 將字母方塊圖旋轉 90 度（往右）
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

// 顯示函式
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
        "LLLLLLL"
    };
    show(rotate90(Y));
    show(rotate90(Y));
    show(rotate90(L));

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
