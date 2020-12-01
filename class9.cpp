#include <iostream>
using namespace std;
int main(){
    int num;
    int sum;
    //assign value in variable
    num = 1;
    sum = 0;
    //while loop
    while (num<=100)
    {
        sum = num + sum;
        num = num + 1;
    }
    cout<<sum;
}