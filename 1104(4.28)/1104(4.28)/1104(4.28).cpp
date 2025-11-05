// 1104(4.28).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main(void) {
    int paycode;
    float weeklyPay;
    printf("Enter paycode (-1 to end): ");
    scanf_s("%d", &paycode);
    while (paycode != -1) 
    {
        switch (paycode) 
        {
        case 1: 
            float salary;
            printf("Enter the manager's weekly salary: ");
            scanf_s("%lf", &salary);
            weeklyPay = salary;
            break;
        case 2:
            float hours, rate;
            printf("Enter hourly rate: ");
            scanf_s("%lf", &rate);
            printf("Enter total hours worked: ");
            scanf_s("%lf", &hours);
            if (hours <= 40)
                weeklyPay = hours * rate;
            else
                weeklyPay = 40 * rate + (hours - 40) * rate * 1.5;
            break;
        case 3:
            float sales;
            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &sales);
            weeklyPay = 250 + 0.057 * sales;
            break;
        case 4: 
            float pieces, wagePerPiece;
            printf("Enter number of pieces produced: ");
            scanf_s("%lf", &pieces);
            printf("Enter wage per piece: ");
            scanf_s("%lf", &wagePerPiece);
            weeklyPay = pieces * wagePerPiece;
            break;
        default:
            printf("Invalid paycode!\n");
            weeklyPay = 0;
        if (weeklyPay > 0)
            printf("Weekly pay is: $%.2f\n\n", weeklyPay);
            printf("Enter paycode (-1 to end): ");
            scanf_s("%d", &paycode);
    }
    printf("Program ended.\n");
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
