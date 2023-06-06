// Yêu cầu
// 1. Tạo 1 biến con trỏ kiểu int *point
// 2. Tạo 1 biến x = 10

#include <iostream>
using namespace std;

int main(){
    int *point = 0;
    int x = 10;

    // lưu địa chỉ biến x cho "point"
    point = &x;
    
    // hiển thị địa chỉ biến x
    cout << "Dia chi bien x la: " << &x << endl;
    cout << "Gia tri bien x la: " << x << endl;

    // dùng *point để hiển thị dữ liệu
    cout << "\nGia tri bien con tro la: " << point << endl;
    cout << "Gia tri bien con tro lay duoc la: " << *point << endl;

    return 0;
}