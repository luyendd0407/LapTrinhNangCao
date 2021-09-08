#include <iostream>
#include <fstream>
using namespace std;

int n;
ifstream fin("2019_2.txt");

void nhap(int a[]){

}
int main()
{
    int a[100];
    nhap(a);
    // Cau 1
    fin >> n;
    for (int i = 1; i <= n; i++){
        fin >> a[i];
    }
    int maxIdx;
    int max = -9999;
    for (int i = 1; i <= n - 2; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += a[i + j];
        }
        if (sum % 3 == 0){
            if (sum > max){
                max = sum;
                maxIdx = i;
            }
            for (int j = 0; j < 3; j++){
                cout << a[i + j] << " ";
            }
            cout << endl;
        }
    }
    // Cau 2
    cout << maxIdx << endl;
    for (int i = 0; i < 3; i++){
        cout << a[maxIdx + i] << " ";
    }

    return 0;
}