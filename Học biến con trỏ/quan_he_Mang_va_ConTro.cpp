#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    // arr == &arr[0]
    // *arr == arr[0]

    // arr + i = &arr[i]
    // *(arr + i) == arr[i]

    // hiển thị các phần tử
    cout << "Dia chi\t\t\t\t\tGia Tri\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << "\t\t\t" << *(arr + i) << "\n";
    }
    

    return 0;
}