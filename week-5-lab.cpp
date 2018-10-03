#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main () 
{
    int a;
    int b;
 
    cout << "First number: \n";
    cin >> a;
    cout << "Second number: \n";
    cin >> b;
    int c = a*a + b*b;
    auto y = sqrt (c);
    
    ofstream myfile;
    myfile.open ("lab5.txt");
    myfile << " Your triangle has 3 sides that are " << a << " , " << b << " and " << y << "\n";
    myfile.close();    

    return 0;
}
