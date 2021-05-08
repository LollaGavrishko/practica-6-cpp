//Объявить два целочисленныхмассива с разными размерами и
//написать функцию, которая заполняет ихэлементы значениями и
//показывает на экран. Функция должна принимать два параметра –
//массив и его размер.

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
 
void create_arr(int arr[][10], int x)
{
    int i,j;
    for(i=0;i<x;i++)            
    {
        cout<<"\n";
        for(j=0;j<x;j++)
        {
           cout<<arr[i][j]<<" ";
        }
    }
    cout<<"\n";
}
 
int main()
{
    int i,j;//int size;
    int source_arr[10][10];
   // cout<<"В данной программе автоматически заполняется массив размером 10х10.\nВведите значение, в пределах которого следует заполнить массив:\n";
   // cin>>size;
 
    for(i=0;i<10;i++)            
    {
        for(j=0;j<10;j++)
        {
            source_arr[i][j]=rand()%100;//size;           
        }
    }
 
    cout<<"\nВывод исходной матрицы:";
    create_arr(source_arr, 10);         
return 0;
}