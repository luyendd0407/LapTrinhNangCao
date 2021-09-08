#include<iostream>
#include<fstream>
using namespace std;

// Cho dãy số thực gồm n số nhập từ file. Lập trình tìm dãy con đơn điệu tăng mà có độ dài lớn nhất.
// Ví dụ
// N = 9
// 1 5 10 2 5 3 7 9 9
// Kết quả: 3 7 9 9

int a[100];
ifstream fin("bt_08_09.txt");

int main(){
    int n;
    fin >> n;
    int max = 1;
    int idx = 0;
    for (int i = 0; i < n; i++){
        fin >> a[i];
    }
    for (int i = 0; i < n-1; i++){
        int count = 1;
        for (int j = i + 1; j < n; j++){
            if (a[j] >= a[j-1]) count++;
            else break;
        }
        if (count > max){
            idx = i;
            max = count;
        }
    }
    for (int i = idx; i < idx + max; i++){
        cout << a[i] << " ";
    }
    return 0;
}