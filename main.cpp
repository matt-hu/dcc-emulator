#include <iostream>
#include "serial/serial.h"

using namespace std;



int main(){
    cout << "Hello world!" << endl;
    //serial::Serial my_serial("/dev/ptyp5", 115200, serial::Timeout::simpleTimeout(1000));
    return 0;
}