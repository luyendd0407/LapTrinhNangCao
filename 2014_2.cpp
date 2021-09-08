#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

int n, m;
ifstream fin("2014_2.txt");


void ReadMatrix(int **a){
    cout << a;
    fin >> m; 
    fin >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            fin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
    
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int checkPrime(int n){
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    // int a[100][100];
    // int* c = &a[0][0];
    // int** b = &c;
    // cout << a << endl;
    // cout << c << endl;
    int b[10];
    int* a = b;

    

    // findLargestNumber

    // for (int i = 0; i < m-2; i++){
    //     for (int j = 0; j < n-2; j++){
    //         int tong = 0;
    //         for (int p = 0; p < 3; p++){
    //             for (int q = 0; q < 3; q++){
    //                 tong += a[i + p][j + q];
    //             }
    //         }
    //         if (tong > 0 && checkPrifme(tong)){
    //             cout << 1 << endl;
    //             for (int p = 0; p < 3; p++){
    //                 for (int q = 0; q < 3; q++){
    //                     cout << a[i + p][j + q] << " ";
    //                 }
    //                 cout << endl;
    //             }
    //         }
    //     }
    // }
    
    return 0;
}