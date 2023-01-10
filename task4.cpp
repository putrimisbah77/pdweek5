#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int hours;
    int days;
    int workers;
    float t_days;
    float w_days;
    float h_of_days;
    float t_w_hourse;
    float t_w_hourse1;
    int resulth;
    while(true)
    {
    cout<<"Enter howers for project: ";
    cin>>hours;
    cout<<"Enter days for working: ";
    cin>>days;
    cout<<"Enter number of workers: ";
    cin>>workers;

    t_days=days*0.1;
    w_days=days-t_days;
    h_of_days=w_days*10;
    t_w_hourse=h_of_days*workers;
    t_w_hourse1=floor(t_w_hourse);
    resulth=t_w_hourse1-hours;
    if(t_w_hourse1>hours)
    {
        cout<<"Yes! "<<resulth<<" hourse left.";
    }
    if(t_w_hourse1<hours)
    {
        cout<<"Not enough time! "<<-resulth<<" hourse needed.";
    }
    cout<<endl;
  }

 
}