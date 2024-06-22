#include <iostream>

using namespace std;

int power_by_recursion(int base, int power_number);

int main(){
    int base, power_number, counter, result = 1;
    cout << "Enter base and Power: ";
    cin >> base >> power_number;

    result = power_by_recursion(base, power_number);

    cout << base << "^" << power_number << " = " << result;
    return 0;
}
/*
 * Function to calculate base^exponent using recursion
 */
int power_by_recursion(int base, int power_number){

    if(power_number == 0){
        return 1;
    }
    return base * power_by_recursion(base, power_number - 1);
}
