#include "EjerciciosComienzo.h"

int suma(int a, int b) {
 	// IMPLEMENTAR SOLUCION
    return a + b;
}
//OK
void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
 	// IMPLEMENTAR SOLUCION
	for (int i = desde; i <= hasta; i += 1) {
		if (i != hasta) {
			cout << i << "*" << tablaDel << "=" << i * tablaDel << ";";
		}
		else {
			cout << i << "*" << tablaDel << "=" << i * tablaDel;
		}
	}
	cout << endl;
}
//OK
void simplificar(int n, int d) {
	// IMPLEMENTAR SOLUCION
	int divisor = 0;
	bool hay = false;
	if (d != 0) {
		if (fabs(n)<fabs(d)) {
			divisor = n;
		}
		else {
			divisor = d;
		}
		for (int i = divisor; i > 0 && !hay; i-=1) {
			if (n % i == 0 && d % i == 0) {
				divisor = i;
				hay = true;
			}
		}
		cout << n / divisor << "/" << d / divisor;
	}
	else {
		cout << n << "/" << d;
	}
}
//OK
int ocurrencias123Repetidos(int* vector, int largo) {
	// IMPLEMENTAR SOLUCION
	int cant = 0;
	bool uno = false;
	bool dos = false;
	bool tres = false;
	for (int i = 0; i < largo; i+=1) {
		if (vector[i] == 1) {
			uno = true;
			if (tres) {
				tres = false;
			}
		}
		else {
			if (uno && vector[i] == 2) {
				dos = true;
			}
			else {
				if (dos && vector[i] == 3) {
					tres = true;
					if (uno && dos && tres) {
						cant += 1;
						uno = false;
						dos = false;
					}
				}
			}
		}
	}

	return cant;
}
//NO ESTA TERMINADO
int maximoNumero(unsigned int n) {
	// IMPLEMENTAR SOLUCIO
	int actual = 0;
	int aux = INT_MIN;
	for (int i = 0; i < n; i += 1) {
		cin >> actual;
		if (actual > aux) {
			aux = actual;
		}
	}
    return aux;
}
//OK
void ordenarVecInt(int *vec, int largoVec) {
	// IMPLEMENTAR SOLUCION
	int aux1 = INT_MIN;
	for (int i = 0; i < largoVec; i += 1) {
		if (vec[i] > aux1) {
			aux1 = vec[i];
		}
		else {
			if (vec[i] < aux1) {
				vec[i - 1] = vec[i];
			}
		}
	}
}
//NO ESTA TERMINADO
char* invertirCase(char* str)
{
	// IMPLEMENTAR SOLUCION
	for (int i = 0; str[i] != "\0"; i += 1) {
		if (str[i] >= 65 || str[i] <= 96) {
			
		}
		else {
			if (str[i] >= 97 || str[i] <= 122) {
				
			}
		}
	}
	return NULL;
}
//NO ESTA TERMINADO

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr)
{
	// IMPLEMENTAR SOLUCION
    return NULL;
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){
	// IMPLEMENTAR SOLUCION
	return NULL;
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2)
{
	// IMPLEMENTAR SOLUCION
	return false;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
