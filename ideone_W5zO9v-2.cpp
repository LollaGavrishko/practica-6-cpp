//Необходимо создать двумерный массив 5 х 5. Далее написать
//функцию, которая заполнит его случайными числами от 30 до 60.
//Создать еще две функции, которые находят максимальный и
//минимальный элементы этого двумерного массива. (О генерации
//случайных чисел есть отдельная статья)
#include <iostream>
using namespace std;

int main() {
int k=30+rand()%31;
cout<<k<<endl;

	return 0;
}