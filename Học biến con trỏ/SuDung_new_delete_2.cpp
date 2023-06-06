// vì sử dụng "new int[n]" để cấp phát vùng nhớ

// nên phải sử dụng "delete[] pointer" để thu hồi vùng nhớ

#include <iostream>
using namespace std;

int main(){
    int *pointer;
    
    // fake nhập n
    int n = 5;

    // cấp phát vùng nhớ cho pointer
    // pointer tương đương với 1 mảng gồm n phần tử
    pointer = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "p[" << i << "] = ";
        cin >> *(pointer + i);
    }
    
    int tong = 0;

    // ví dụ ta sẽ tính tổng các phần tử của p[n]
    for (int i = 0; i < n; i++)
    {
        tong = tong + *(pointer + i);
    }
    
    cout << "Tong cac phan tu la: " << tong << "\n";

    // thu hồi vùng nhớ
    // sau khi sử dụng pointer nên thu hồi vùng nhớ
    delete[] pointer;

    return 0;
}