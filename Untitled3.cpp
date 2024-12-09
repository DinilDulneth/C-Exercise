#include<iostream>
using namespace std;

int main()
{
    int i;
    int num;
    float prime;

    cout << "enter the number";
    cin << num;

    prime = num % 2.0;

    if(prime == 1)
    {
        cout << "number is prime";
    } 
    else
    {
        cout << "number is not prime";
    }
}

