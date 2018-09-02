#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
using std::setw;
using std::setprecision;
using std::fixed;
using std::endl;

/*Function defination*/
void circle(const double& red , double &um , double& f1);

/*Constant values declearation*/
const double startRadius = 05;
const double endRadius   = 10.0;
const double step       = 0.5;

/*Header mesasge*/
string header = "\n ****Computing circle *** \n",
                line(60,'-');
                
/*main function*/
int main(){
    
    double red,circuit,plane;
    
    cout << header ;
    cout << endl;
    
    cout << setw(10)<< "Radius";
    cout << setw(20)<<"Circumference";
    cout << setw(20)<< "Area "  ;
    cout << endl;
    cout << line;
    cout << endl;
    cout << fixed; /*Floating point presentation*/
    
    for(red=startRadius;red<endRadius+step/2;red+=step){
        circle(red,circuit,plane);
        cout << setprecision(1) << setw(8) << red
             << setprecision(5) << setw(22) << circuit
                                << setw(20) << plane;
        cout << endl;
    }
    
    return 0;
}

/*function defination*/
void circle(const double& r , double& u , double& f){
    const double pi = 3.1415;
    u = 2 * pi * r;
    f = pi * r * r;
}
