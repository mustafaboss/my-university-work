# include <iostream>
using namespace std;

int main(){
    float radius; 
    float diametre;
    float circumfarance;
    float area;
    //get raduis from user
    cout<<"Please enter raduis= ";
    cin>>radius;
    cout<<endl;
//calculate diametre
    diametre = radius*2;
    cout<<"The diametre is = ";
    cout<<diametre;
    cout<<endl;
//calculate circumfrance
    circumfarance = radius*2*3.14;
    cout<<"The circumfrance is = ";
    cout<<circumfarance;
    cout<<endl;

    area = radius*radius*3.14;
    cout<<"the area is =";
    cout<<area;
}


