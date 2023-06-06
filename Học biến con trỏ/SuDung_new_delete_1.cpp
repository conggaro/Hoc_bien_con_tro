// Sử dụng new và delete (phiên bản 1)

// new
// --> dùng để cấp phát vùng nhớ

// delete
// --> dùng để thu hồi vùng nhớ

// delete có 2 trường hợp sử dụng
// trường hợp 1: delete pointer;
// trường hợp 2: delete[] pointer;

#include <iostream>
using namespace std;

int main(){
    int *pointer;
    int x = 10;

    pointer = &x;

    cout << pointer << "\n" << *pointer << "\n\n";

    delete pointer; 
    
    // vì không sử dụng từ khóa new nên chỉ cần "delete pointer"
    // nếu dùng new --> thì phải viết "delete[] pointer"

    return 0;
}