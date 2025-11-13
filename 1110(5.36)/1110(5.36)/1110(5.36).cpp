// 1110(5.36).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
void hanoi(unsigned int n, char from, char aux, char to);
int main(void)
{
    unsigned int n;

    printf("請輸入河內塔的盤子數: ");
    scanf_s("%u", &n);
    printf("\n河內塔 (%u 個盤子) 的移動步驟如下:\n", n);
    hanoi(n, 'A', 'B', 'C');
    unsigned long long total = (1ULL << n) - 1;
    printf("\n總共需要移動 %llu 次。\n", total);
    return 0;
}
void hanoi(unsigned int n, char from, char aux, char to)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c -> %c\n", from, to);
    }
    else
    {
        hanoi(n - 1, from, to, aux);          
        printf("Move disk %u from %c -> %c\n", n, from, to);
        hanoi(n - 1, aux, from, to);           
    }
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
