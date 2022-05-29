#include<iostream>
#include<cmath>
using namespace std;
double converter(const int mpg){
    return round(mpg * 1.609344 / 4.54609188*100)/100;
}
int main() {
    int mpg = 12;
    cout << converter(mpg) << endl;
    return 0;
}