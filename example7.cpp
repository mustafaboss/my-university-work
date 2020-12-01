# include <iostream>
using namespace std;

int main(){
    int cs201_marks;
    int mgt211_marks;
    int mth301_marks;
    int mth201_marks;
    int eng201_marks;
    int total_marks;
    int obtain_marks;
    int every_subject_marks;
    int average_marks;
    int percentage;

    cout<<"cs101_marks";
    cin>>cs201_marks;
    cout<<endl;
    cout<<"mgt_211";
    cin>>mgt211_marks;
    cout<<endl;
    cout<<"mth_301";
    cin>>mth301_marks;
    cout<<endl;
    cout<<"mth201_marks";
    cin>>mth201_marks;
    cout<<endl;
    cout<<"eng201_marks";
    cin>>eng201_marks;
    cout<<endl;
    obtain_marks = cs201_marks+mth201_marks+mth301_marks+mgt211_marks+eng201_marks;
    cout<<" Obtain marks ";
    cout<<obtain_marks;
    cout<<endl;
    total_marks = 300;
    cout<<"total marks";
    cout<<total_marks;
    cout<<endl;
    every_subject_marks = 60;
    cout<<"EVERY SUBJECT TOTAL MARKS";
    cout<<every_subject_marks;
    average_marks = obtain_marks/5;
    cout<<endl;
    cout<<"average marks";
    cout<<average_marks;
    cout<<endl;
    percentage = obtain_marks/total_marks*100;
    cout<<" percentage ";
    cout<<percentage;
    cout<<endl;
if(average_marks>55){
cout<<"marvilious student";
}
else
{
    (average_marks>50);
    cout<<"welldone";
}


   
}