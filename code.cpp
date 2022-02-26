// beecrowd 1052 Month
#include <iostream>

using namespace std;
 
int main() {
    int number;
    string months[12]={"January","February","March","April","May","June","July",
            "August","September","October","November","December"};
    cin>> number;
    if(number>=1 && number<=12){
        cout<< months[number-1]<<endl;
    }

   
    system("pause");
    return 0;
}