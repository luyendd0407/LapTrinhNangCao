#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n, m;
    ifstream fin("input.txt");
    fin >> n; // trieu chung
    fin >> m; // benh
    // a[i][j] == 1 neu trieu chung i lien quan den benh j
    int a[100][100];
    int count[100];
    int common[100][100];
    cout << "Cau 1: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            fin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        count[i] = 0;
        for (int j = 0; j < n; j++){
            if (a[j][i] == 1) count[i]++;
        }
        cout << i << "(" << count[i] << ")";
        if (i != m-1) cout << "; ";
    }
    cout << "\nCau 2: ";
    for (int i = 0; i < m-1; i++){
        for (int j = i+1; j < m; j++){
            common[i][j] = 0;
            for (int k = 0; k < n; k++){
                if (a[k][i] == 1 && a[k][j] == 1) common[i][j]++;
            }
            cout << i << "-" << j << "(" << common[i][j] << ")";
            if (i != m-2 || j != m-1) cout << "; ";
        }
    }
    cout << "\nCau 3: ";
    for (int i = 0; i < m-1; i++){
        for (int j = i+1; j < m; j++){
            cout << i << "-" << j << "(" << (float) common[i][j]/(count[i] + count[j] - common[i][j]) << ")";
            if (i != m-2 || j != m-1) cout << "; ";
        }
    } 
    
    return 0;
}