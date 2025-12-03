// 1130(6.33).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int binarySearch(int a[], int low, int high, int key);
int main()
{
    int array[] = { 2, 5, 7, 9, 12, 15, 20, 25, 33, 40 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    printf("請輸入搜尋的數字: ");
    scanf_s("%d", &key);
    int result = binarySearch(array, 0, size - 1, key);
    if (result != -1)
    {
        printf("找到 %d 在陣列的下標位置 %d\n", key, result);
    }
    else
    {
        printf("找不到 %d\n", key);
    }
    return 0;
}
int binarySearch(int a[], int low, int high, int key) 
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (a[mid] == key)
    {
        return mid;                
    }
    else if (key < a[mid])
    {
        return binarySearch(a, low, mid - 1, key);  
    }
    else
    {
        return binarySearch(a, mid + 1, high, key);   
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
