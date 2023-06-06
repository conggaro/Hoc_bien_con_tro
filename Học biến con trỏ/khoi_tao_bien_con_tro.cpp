#include <iostream>
using namespace std;

int main(){
    int *pointer1 = 0;
    double *pointer2 = 0;
    string *pointer3 = 0;
    char *pointer4 = 0;
    void *pointer5 = 0;

    int x = 1;
    double y = 1;
    string z = "1";
    char w = '1';

    pointer1 = &x;
    pointer2 = &y;
    pointer3 = &z;
    pointer4 = &w;

    pointer5 = &x;

    cout << pointer1 << endl;
    cout << pointer2 << endl;
    cout << pointer3 << endl;
    cout << pointer4 << endl;
    cout << pointer5 << endl;

    return 0;
}