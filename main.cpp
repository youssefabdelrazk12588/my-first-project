#include <iostream>

using namespace std;

int main(){
    int totelseconds;
    int hours, minutes, seconds, remain;
    cout<<"Enter number of seconds:";
    cin>>totelseconds;
    hours = totelseconds/3600;
    remain =totelseconds% 3600;
    minutes= remain/60;
    seconds= remain%60;
    cout<< hours<<"h"<<minutes<<"min"<<seconds<<"s";

    return 0;
}
