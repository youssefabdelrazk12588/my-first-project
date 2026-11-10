#include <iostream>

using namespace std;

int main()
{
   int x  ;
   cout<<"enter the number \n";
   cin>> x ;

   for(int y =1; y <= x ; y++) {

    if(y % 3 == 0  && y % 5 == 0)
        cout<<"fizz_puzz\n";
    else if(y % 5 == 0)
        cout<<"puzz\n";
    else if(y % 3 == 0)
        cout<<"fizz\n";
    else
        cout<<y<<"\n";
   }

    return 0;
}
