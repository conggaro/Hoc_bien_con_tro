// phép cộng biến con trỏ
// cho 1 mảng

// hiển thị địa chỉ của các phần tử trong mảng

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {0, 1, 2, 3, 4};

    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << "\n";
    }

    return 0;
}