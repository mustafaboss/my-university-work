#include <iostream>
using namespace std;
int main(){
    int num;
    int sum;
    num = 1;
    sum = 0;
    while (num<=1000)
    {
        sum = num + sum;
        sum = num + 1;
    }
    
cout<<sum;
}
