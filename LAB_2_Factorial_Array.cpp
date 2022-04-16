#include <iostream>
using namespace std;

int main()
{
    int result[1000], number, carry, z;

    cout << "Find factorial of: ";
    cin >> number;

    // Put -1 in all elements of array except the first
    for (int i = 0; i < 1000; i++){
        result[i] = -1;
    }
    result[0] = 1;

    if (number == 0 | number == 1){}

    else{
        for (int j = 0; j <= number; j++){
            if (j == 0 | j == 1){
                continue;
            }
            carry = 0;
            for (int i = 0; i < 1000; i++){
                if (result[i] != -1){
                    z = (result[i] * j + carry);
                    result[i] = (z) % 10;
                    carry = (z) / 10;
                }
                else if (carry != 0 & result[i] == -1){
                    result[i] = carry;
                    break;
                }
            }
        }
    }

    // display result
    for (int i = 999; i >= 0; i--){
        if( result[i] == -1){
            continue;
        }
        else{
            cout << result[i];
        }
    }
    return 0;
}