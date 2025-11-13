// 1110(p23).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
enum Status{CONTINUE,WON,LOST};
int rollDice(void);
int main()
{
    int sum, myPoint;
    enum Status gameStatus;
    srand(time(NULL));
    sum = rollDice();
    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }
    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else
        {
            if (sum == 7)
            {
                gameStatus = LOST;
            }
        }
    }
    if (gameStatus == WON)
    {
        printf("Player wins\n");
    }
    else
    {
        printf("Player loses\n");
    }
    system("pause");
    return 0;
}
int rollDice(void)
{
    int d1, d2, worksum;
    d1 = 1 + (rand() % 6);
    d2 = 1 + (rand() % 6);
    worksum = d1 + d2;
    printf("Player rolled %d + %d = %d\n", d1, d2, worksum);
    return worksum;
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
