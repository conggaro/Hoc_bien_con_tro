// Yêu cầu:
// truyền 1 hàm vào 1 hàm khác như 1 tham số
// giống callback của JavaScript ghê

#include <iostream>
using namespace std;

// hàm phép cộng
int phep_cong(int x, int y){
    return x + y;
}

// hàm phép trừ
int phep_tru(int x, int y){
    return x - y;
}

// khai báo hàm có sử dụng tham số
// là con trỏ hàm
int phep_toan(int x, int y, int (*phep_toan_can_goi)(int, int)){
    int z;
    z = (*phep_toan_can_goi)(x, y);
    return z;
}

int main(){
    int m, n;

    // khai báo một con trỏ hàm
    // và trỏ đến hàm phép trừ
    int (*pointer_ham_phep_tru)(int, int) = phep_tru;

    // gọi hàm phép toán
    // với tham số thứ 3 là con trỏ của 1 hàm khác
    m = phep_toan(15, 20, &phep_cong);
    n = phep_toan(40, 18, pointer_ham_phep_tru);

    cout << "m = " << m << "\n";
    cout << "n = " << n << "\n";

    return 0;
}