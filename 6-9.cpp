//Необходимо создать двумерный массив 5 х 5. Далее написать
//функцию, которая заполнит его случайными числами от 30 до 60.
//Создать еще две функции, которые находят максимальный и
//минимальный элементы этого двумерного массива. (О генерации
//случайных чисел есть отдельная статья)
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int a = 5;
void func(int[][a], const int size);
int fMin(int[][a], const int size);
int fMax(int[][a], const int size);
int main() {
setlocale(LC_ALL, "rus");
int M[a][a] = {};
func(M, a); //заполняем и показываем массив
cout « endl;
cout « "Минимум: " « fMin(M, a) « endl;
cout « "Максимум: " « fMax(M, a) « endl;
return 0;
}

void func(int arr[][a], const int size) {
srand(time(NULL));
for (int i = 0; i < size; i++) {
cout « "| ";
for (int j = 0; j < size; j++) {
arr[i][j] = 30 + rand() % 31;
cout « arr[i][j] « " ";
}
cout « " |" « endl;
}
}

int fMin(int arr[][a], const int size) {
int min = arr[0][0];
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
if (arr[i][j] < min) min = arr[i][j];
}
}
return min;
}

int fMax(int arr[][a], const int size) {
int max = arr[0][0];
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
if (arr[i][j] > max) max = arr[i][j];
}
}
return max;
}	
