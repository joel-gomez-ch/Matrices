#include <iostream>
using namespace std;

int main(){
	
    int n, suma;
    cin >> n;
    int matriz[n][n];
    suma = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        	cin >> matriz[i][j];
            suma = suma + matriz[i][j];
        }
    }
    
    cout << suma;
    
    return 0;
}