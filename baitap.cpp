#include <iostream>
using namespace std; 

int main(){
    int a,b;
    // Số dư trong tài khoản là 0 đồng
    float balance = 0.0f;

    cout << "Nhap lieu thu nhap : ";
    cin >> a;

    cout << "Nhap lieu chi phi : ";
    cin >> b;

    int c,d;
    // Tổng thu nhập
    cin >> c;
    cout  << "Tổng thu nhập : " << c << endl;

    // Tổng chi phí
    cin >> d;
    cout << "Tổng chi phí : " << d << endl;
    return 0;
}