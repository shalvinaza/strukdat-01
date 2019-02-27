/*
Author      : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program untuk mengkonversi celcius ke fahrenheit
Tahun       : 2019
*/
#include <iostream>

using namespace std;

float cel2Fah (float cel){
    float fahrenheit;
    fahrenheit = cel * 9/5 +32;
    return fahrenheit;
}

int main()
{
    float cel = 9;
    float fahrenheit = cel2Fah(cel);
    cout << "temp is "<< fahrenheit;
}

