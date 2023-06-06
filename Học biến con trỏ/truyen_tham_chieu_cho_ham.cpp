// Yêu cầu:
// 1. truyền tham số cho hàm bằng cách sử dụng con trỏ

#include <iostream>
using namespace std;

// tạo hàm cộng 2 số
int cong_2_so(int *a, int b){ // thì bên này phải hứng địa chỉ
    *a = *a + 2;
    b = b + 4;
    return *a + b;
}

int main(){
    int a = 15;
    int b = 20;
    int c;

    c = cong_2_so(&a, b); // bên này truyền địa chỉ

    cout << "a la: " << a << endl;
    cout << "b la: " << b << endl;
    cout << "Tong cua a + b la: " << c << endl;

    return 0;
}