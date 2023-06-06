// Yêu cầu:
// 1. sử dụng biến con trỏ để nhập mảng 1 chiều
// 2. tính tổng các phần tử của mảng

#include <iostream>
#define SIZE 20
using namespace std;

int main(){
    // fake nhập vào 1 số nguyên n
    int n = 5;

    // tạo mảng
    int arr[SIZE];

    int tong = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> *(arr + i);
        tong = tong + *(arr + i);
    }
    
    cout << "\ntong = " << tong << "\n";

    return 0;
}