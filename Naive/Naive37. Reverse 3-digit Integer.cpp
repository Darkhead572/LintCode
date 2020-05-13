#include <iostream>
#include <cstdlib>
using namespace std;

class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        if (number < 100 || number > 999)
            throw "The number you entered is not in range!";
        int a, b, c;
        c = number % 10;
        a = number / 100;
        b = (number - 100 * a) / 10;
        return 100 * c + 10 * b + a;
    }
};

//method2
//change the integer into string
//then exchange the first part and the last part
//in the end, change the string into integer
