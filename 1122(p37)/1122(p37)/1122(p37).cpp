// 1122(p37).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int linearSearch(const int array[], int key, int size);
int main()
{
    int a[SIZE],searchKey,element;
    for (int x = 0; x < SIZE; x++)
    {
        a[x] = 2*x;
    }
    printf("Enter integer search key:\n");
    scanf_s("%d", &searchKey);
    element = linearSearch(a, searchKey, SIZE);
    if (element != -1)
    {
        printf("Found value in element %d\n", element);
    }
    else
    {
        printf("Value not found\n");
    }
    system("pause");
    return 0;
}
int linearSearch(const int array[], int key, int size)
{
    for (int n = 0; n < size; n++)
    {
        if (array[n] == key)
        {
            return n;
        }
    }
    return -1;
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
