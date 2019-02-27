/*
Author      : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program untuk menukar nilai dua buah integer
Tahun       : 2019
*/
#include <iostream>

using namespace std;

void swap (int& x, int& y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main()
{
    int x=5;
    int y=4;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    swap (x,y);
    cout << "After Swap" << endl;
    cout << "x is "<< x << endl;
    cout << "y is "<< y << endl;
}
