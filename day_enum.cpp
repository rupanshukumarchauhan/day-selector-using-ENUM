#include <iostream>
using namespace std;
int main()
{
    enum Day {sun=1,mon,tue,wed,thu,fri,sat};
    cout<<"enter day no. (1-7)\n";
    int day_number;
    cin>>day_number;

    Day day=static_cast<Day>(day_number);

    switch (day){
        case 1:
        cout<<"today is sunday\n";
        break;
        case mon:
        cout<<"today is monday\n";
        break;
        case 3:
        cout<<"today is tuesday\n";
        break;
        case wed:
        cout<<"today is wednesday\n";
        break;
        case 5:
        cout<<"today is thursday\n";
        break;
        case fri:
        cout<<"today is friday\n";
        break;
        case 7:
        cout<<"today is saturday\n";
        break;
        default:
        cout<<"invalid day\n";
    }
    return 0;
}
