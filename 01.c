#include <stdio.h>


void test(int arr)
{"ok"}
void test(int arr[10])
{"ok"}
void test(int *arr)
{"ok"}
void test2(int *arr[20])
{"ok"}
void test2(int **arr)
{"ok"}
int main()
{
    int arr[10]={0};
    int* arr2[20]={0};
    test(arr);
    test2(arr2);
    return 0;
}



void test(int arr[3][5])
{}
void test(int arr[][5])
{}
void test(int arr[3][])
{"error"}
void test(int (*p)[5])
int main()
{
    int arr[3][5]={0}
    test(arr);
    return 0;
}