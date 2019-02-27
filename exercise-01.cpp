/*
Author      : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program if else if
Tahun       : 2019
*/
#include <iostream>

using namespace std;

void fizzbuzz ();

int main()
{
    fizzbuzz();
}
void fizzbuzz () {
    for (int i=1; i<=100; i++){
        if (i%15==0){
            cout << "fizzbuzz"<< endl;
        }
        else if (i%3==0){
            cout << "fizz"<<endl;
        }
        else if (i%5==0){
            cout << "buzz"<<endl;
        }
        else {
            cout << i << endl;
        }
    }
}
