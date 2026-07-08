#include <iostream>
using namespace std;
int main() {
	
    int m, n, suma;
    cin >> m >> n;
    int matriz[m][n];
    suma = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        	cin >> matriz[i][j];
            suma = suma + matriz[i][j];
        }
    }
    
    cout << suma;
    
    return 0;
}
