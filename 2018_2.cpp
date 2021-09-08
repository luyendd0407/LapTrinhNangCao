#include<iostream>
#include<fstream>
using namespace std;

int n;
// hang i cot j 1 -> n
// mã màu từ 1 -> n
// Lj: số lượng màu khác nhau để tô các ô trong cột thứ j


ifstream fin("2018_2.txt");
int c[100][100];
int check[100][100];
int L[100];


int main(){
    fin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n ; j++){
            fin >> c[i][j];
        }
    }

    // cau 1
    for (int j = 1; j <= n; j++){
        for (int i = 1; i <= n ; i++){
            int color = c[i][j];
            if (!check[j][color]){ // check mau color tai cot j
                L[j]++;
            }
            check[j][color]++;
        }
    }
    cout << "Cau 1: " << L[1] << endl;

    // cau 2
    int dasac = L[1];
    for (int j = 2; j <= n; j++){
        if (L[j] > dasac) dasac = L[j];
    }
    cout << "Cau 2: " << dasac << endl;


    return 0;
}