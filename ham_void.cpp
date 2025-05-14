#include <bits/stdc++.h>
using namespace std;

void display() {
    cout << "hoc cplusplus\n";
    cout << "30 ngay hoc c++ co ban\n"; // Thêm \n để xuống dòng
}

void tinhtong(int a, int b) {
    cout << "a+b=" << (a + b) << endl;
}

void kitu(char x, char y, char z) {
    cout << x << " " << y << " " << z << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    display();
    cout << "\n";

    int a, b;
    if (cin >> a >> b) { // Kiểm tra đọc số nguyên
        tinhtong(a, b);
    } else {
        cout << "Loi: Vui long nhap hai so nguyen!\n";
        cin.clear();// Xóa trạng thái lỗi của cin (ví dụ: khi đọc ký tự đặc biệt thay vì số)
        cin.ignore(100, '\n');// Bỏ qua toàn bộ dòng không hợp lệ trong bộ đệm, đến khi gặp ký tự xuống dòng 
    }

    char x, y, z;
    if (cin >> x >> y >> z) { // Đọc 3 ký tự từ input.txt
        kitu(x, y, z);
    } else {
        cout << "Loi: Vui long nhap 3 ky tu!\n";
    }

    return 0;
}