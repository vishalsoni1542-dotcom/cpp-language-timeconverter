#include<iostream>
using namespace std;

class TimeConverter{
    public:

    void SecToHMS(){

        int sec,hour,min;

        cout << "ENTER TOTAL SECONDS :";
        cin >> sec;

        hour=sec/3600;
        sec=sec%3600;

        min=sec/60;
        sec=sec%60;

        cout << "HH:MM:SS => "<< hour << " : "<<min<<" : "<<sec << endl;
        
    }

    void HMSToSec(){

        int hh,mm,ss;

        cout << "ENTER TOTAL HOURS :";
        cin >> hh;

        cout << "ENTER TOTAL MINUTES :";
        cin >> mm;

        cout << "ENTER TOTAL SECONDS :";
        cin >> ss;

        
        ss = hh*3600 + mm*60 + ss;

        cout << "TOTAL SECONDS => " << ss ;
    }

};


int main(){

    TimeConverter t;
    t.SecToHMS();
    t.HMSToSec();
    return 0;
}