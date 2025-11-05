// 1104(3.17).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
    int n{}, d, y,mi;
    float r,it,td;
    while (1)
    {
        printf("Enter acccout number (-1 to end): ");
        scanf_s("%d", &n);
        if (n == -1) return 0;
        printf("Enter mortgage amount (in dollars): ");
        scanf_s("%d", &d);
        printf("Enter mortgage term (in years): ");
        scanf_s("%d", &y);
        printf("Enter interest rate (as a decimal): ");
        scanf_s("%f", &r);
        it = d * y * r;
        td = d + it;
        mi = td / (y * 12);
        printf("The monthly payable interest is: $ %d", mi);
        printf("\n\n");
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
