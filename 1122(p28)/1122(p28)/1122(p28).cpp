// 1122(p28).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void modifyArray(int b[], int size);
void modifyElement(int e);
int main()
{
    int a[SIZE] = { 0,1,2,3,4 };
    printf("Effects of passing entire array by reference:\n\nThe value of the original array are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    modifyArray(a, SIZE);
    printf("The values of the modified array are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);
    modifyElement(a[3]);
    printf("The value of a[3] is %d\n", a[3]);
    system("pause");
    return 0;
}
void modifyArray(int b[], int size)
{
    for (int j = 0; j < size; j++)
    {
        b[j] *= 2;
    }
}
void modifyElement(int e)
{
    printf("Value in modifyElement is %d\n", e *= 2);
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
