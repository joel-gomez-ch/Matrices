#include <iostream>
using namespace std;

int main() {
	
    int m, n, posi, posj, mayor;
    cin >> m >> n;
    int matriz[m][n];
    mayor = matriz[1][1];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        	cin >> matriz[i][j];
            if(mayor < matriz[i][j]){
                mayor = matriz[i][j];
                posi = i;
                posj = j;
            }
        }
    }
    
    cout << mayor << endl << "Posision: matriz" << "["<< posi <<"]" << "[" << posj << "]";
    
    return 0;
}